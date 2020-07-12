#ifndef __LARGE_MATRIX_MULT_H__
#define __LARGE_MATRIX_MULT_H__

#define N  1024
#define B_col_block  32

#pragma SDS data zero_copy(A[0:N*N], B[0:N*N], C[0:N*N])
//zero_copy pragma directs the SDSoc to map the argument into shared memory
//in SDSoC, if we don't include pragmas, a pointer argument is taken to be a scalar parameter. ( different from cpp where it will be one-D array type)

int mmult( float A[N*N], float B[N*N], float C[N*N]);

#endif
