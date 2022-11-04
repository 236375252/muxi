#include <stdio.h>

int main()
{
	int i, j, m, nums[10];

	for (i = 0; i < 10; i++) {
		printf("nums[%d] =", i); scanf("%d", &nums[i]);
	}

        for (i = 0; i < 10; i++) {
	       	for (j = 0; j < 10; j++) {
			if (nums[i] < nums[j]) {
				m = nums[i];
				nums[i] = nums[j];
				nums[j] = m;
			}
		}
	}

	for (i = 0; i < 10; i++) {
	        printf("%d ",nums[i] );
	}
	printf("\n");
}

