#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "multiplication.h"

//C buf original 


inline void mmult_sub(float A[N],  float Bbuf[N][B_col_block], float C[N]);


int mmult( float A[N*N], float B[N*N], float C[N*N])

{
	float Bbuf[N][B_col_block];
	float Abuf[N];
	float Cbuf[B_col_block];
#pragma HLS ARRAY_PARTITION variable=Bbuf complete dim=2
#pragma HLS ARRAY_PARTITION variable=Cbuf complete dim=1

	for (int Bblock_num = 0; Bblock_num < N/B_col_block; Bblock_num++) {
		for (int i = 0; i < N; i++) { // row of the block B
			for (int j = 0; j < B_col_block; j++) { //putting B into a block
	#pragma HLS unroll
				Bbuf[i][j] = *(B+i*N + j+Bblock_num*B_col_block); // <== your change
				//Bbuf[i][j] = *(B+Bblock_num*B_col_block+i*N+j); // <== previous
			}
		}

		for (int p = 0; p < N; p++) { //choosing the row of A
			for (int i = 0; i < N; i++) { // prepare Abuf
				Abuf[i] = *(A + p*N + i); 
			}
			for (int i = 0; i < B_col_block; i++) { // prepare Cbuf, clear
		#pragma HLS unroll
				Cbuf[i] = 0;
			}

			//mmult_sub(A+p*N, Bbuf, C+p*N+Bblock_num*B_col_block); //putting the starting address of the matrix
			mmult_sub(Abuf, Bbuf, Cbuf); //putting the starting address of the matrix
			
			for (int i = 0; i < B_col_block; i++) { // copy result to C
				*(C+p*N+Bblock_num*B_col_block+i)= Cbuf[i];
			}
		}
	}

	return 0;

}


inline void mmult_sub(float Abuf[N],  float Bbuf[N][B_col_block], float Cbuf[N])  {



	for(int i = 0; i < N; i++) {
		for (int j = 0; j < B_col_block; j++) {
#pragma HLS unroll
			Cbuf[j] += Abuf[i]*Bbuf[i][j];
		}
	}



	return;

}
