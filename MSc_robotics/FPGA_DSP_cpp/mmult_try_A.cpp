#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "multiplication.h"

//only A into mmult function

inline void mmult_sub(float Abuf[N],  float Bbuf[N][B_col_block], float* C);


int mmult( float A[N*N], float B[N*N], float C[N*N])

{
	float Bbuf[N][B_col_block];
	float Abuf[N];
#pragma HLS ARRAY_PARTITION variable=Bbuf complete dim=2

	for (int Bblock_num = 0; Bblock_num < N/B_col_block; Bblock_num++) {
		for (int i = 0; i < N; i++) { // row of the block B
			for (int j = 0; j < B_col_block; j++) { //putting B into a block
	#pragma HLS unroll
				Bbuf[i][j] = *(B+i*N + j+Bblock_num*B_col_block);
			}
		}

		for (int p = 0; p < N; p++) { //choosing the row of A
			for (int i = 0; i < N; i++) {
				Abuf[i] = *(A + i+p*N);
			}
			
			mmult_sub(Abuf, Bbuf, C+p*N+Bblock_num*B_col_block); //putting the starting address of the matrix
		}
	}

	return 0;

}

inline void mmult_sub(float Abuf[N],  float Bbuf[N][B_col_block], float* C)  {

	float Cbuf[B_col_block];

#pragma HLS ARRAY_PARTITION variable=Cbuf complete dim=1


	for (int i = 0; i < B_col_block; i++) {
#pragma HLS unroll
		Cbuf[i] = 0;
	}

	for(int i = 0; i < N; i++) {
		for (int j = 0; j < B_col_block; j++) {
#pragma HLS unroll
			Cbuf[j] += Abuf[i]*Bbuf[i][j];
		}
	}

	for (int i = 0; i < B_col_block; i++) {
		*(C+i)= Cbuf[i];
	}

	return;

}
