#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "sds_lib.h"
#include "mmultiplication.h"



class perf_counter
{

public:

     uint64_t tot, cnt, calls;
     perf_counter() : tot(0), cnt(0), calls(0) {};
     inline void reset() { tot = cnt = calls = 0; }
     inline void start() { cnt = sds_clock_counter(); calls++; };
     inline void stop() { tot += (sds_clock_counter() - cnt); };
     inline uint64_t avg_cpu_cycles() { return ((tot+(calls>>1)) / calls); };

};



static void init_arrays(float *A,  float *B, float *tem, float *tem1)

{

     for (int i = 0; i < N; i++) {
          for (int j = 0; j < N; j++) {
               A[i * N + j] = rand() % (N * N);
               B[i * N + j] = A[i * N + j];
               tem[i * N + j] = 0.0;
               tem1[i * N + j] = 0.0;

          }
     }
}



void mmult_golden(float *A,  float *B, float *tem)

{
     for (int row = 0; row < N; row++) {
          for (int col = 0; col < N; col++) {
               float result = 0.0;
               for (int k = 0; k < N; k++) {
                    result += A[row*N+k] * B[k*N+col];
               }
               tem[row*N+col] = result;
          }
     }
}



static int result_check(float *tem1, float *tem)

{
     for (int i = 0; i < N * N; i++) {
          if (tem[i] != tem1[i]) {
               std::cout << "Mismatch: data index=" << i << " d=" << tem[i]
                         << ", dout=" << tem1[i] << std::endl;
               return 1;
          }
     }
     return 0;
} //if the results are the same, then it returns 0. if not, returns 1.









int mmult_test(float *A,  float *B, float *tem, float *tem1)

{

     std::cout  << " floating point large matrix multiplication " << N << "x" << N << std::endl;

     int result = 0;
     perf_counter hw_ctr, sw_ctr;
     init_arrays(A, B, tem, tem1);

     sw_ctr.start();
     mmult_golden(A, B, tem);
     sw_ctr.stop();

     hw_ctr.start();
     mmult(A, B, tem1);
     hw_ctr.stop();


    if (result_check(tem1, tem))
        	  result = 1;






    uint64_t sw_cycles = sw_ctr.avg_cpu_cycles();
    uint64_t hw_cycles = hw_ctr.avg_cpu_cycles();
    double speedup = (double) sw_cycles / (double) hw_cycles;

    std::cout << "Average number of CPU cycles running mmult in software: "
                   << sw_cycles << std::endl;
    std::cout << "Average number of CPU cycles running mmult in hardware: "
                   << hw_cycles << std::endl;
    std::cout << "Speed up: " << speedup << std::endl;

     return result; //if the test is passed, then it returns 0. if not, returns 1 that was give by the result_check

}





int main(int argc, char* argv[]){



	std::cout << "multiplication start!" << std::endl;

     int test_passed = 0;
     float *A, *B, *tem, *tem1;



     A = (float *)sds_alloc(N * N * sizeof(float));
     B = (float *)sds_alloc(N * N * sizeof(float));
     tem = (float *)malloc(N * N * sizeof(float));
     tem1 = (float *)sds_alloc(N * N * sizeof(float));



     

     if (!A || !B || !tem || !tem1) {

          if (A) sds_free(A);
          if (B) sds_free(B);
          if (tem) free(tem);
          if (tem1) sds_free(tem1);

          return 2;

     }

     

     test_passed = mmult_test(A, B, tem, tem1); //will get 0 if the it passes the test



     std::cout << "TEST " << (test_passed ? "FAILED" : "PASSED") << std::endl;



     sds_free(A);
     sds_free(B);
     free(tem);
     sds_free(tem1);



     std::cout << "Multiplication finished" << std::endl;
     return (test_passed ? -1 : 0);

}

