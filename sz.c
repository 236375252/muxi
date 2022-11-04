#include <stdio.h>

int main()
{
	int i, num;
        int nums[10] = {2, 3, 5, 7, 11, 13, 17, 23, 31, 37};

	printf("请输入一个数");
	scanf("%d", &num);

	for (i = 0; i < 10; i++) {
		if (num % nums[i] == 0)
			printf("%d ", nums[i]);
	}
	printf("\n");
}	


