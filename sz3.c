#include <stdio.h>

int main()
{
	int A[3][3], B[3][3];
	int i, j, k;
	int C[3][3] = { {0,0,0},{0,0,0},{0,0,0} };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                        printf("B[%d][%d]=", i, j);
                        scanf("%d", &B[i][j]);
                }
        }

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	printf("A[3][3] * B[3][3]=\n");
	for (i = 0; i < 3; i++) {
		printf("|");
                for (j = 0; j < 3; j++) {
			printf("%4d ", C[i][j]);
		}
		printf("|\n");
	}
}





