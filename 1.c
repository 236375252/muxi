#include <stdio.h>

int main(void)
{
    printf("Hello world!");
    int a = 10, b = 8, m, i, j;
    m = a;
    a = b;
    b = m;
    printf("%d %d\n", a, b);
    int A[2][2] = { {1, 2}, {3, 4} };
    for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
			printf("%4d ", A[i][j]);
		}
		printf("\n");
	}
	printf("%d\n", 2 ^ 2);
}
