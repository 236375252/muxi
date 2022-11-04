#include <stdio.h>

void printf_AT(int A[3][3])
{
	int m, i, j;
	for (i = 0; i < 3; i++) {
		for (j = i; j < 3; j++){
			m = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = m;
		}
	}
	for (i = 0; i < 3; i++) {
		proitf("|");
                for (j = 0; j < 3; j++) {
			printf("%4d ", A[i][j]);
		}
		printf("|\n");
	}
}

int main()
{
	int A[3][3], C[3][3];
	int i, j;

	for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++){
			printf("A[%d][%d]", i, j); 
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("A^T=\n");
	printf_AT(A);
}	
