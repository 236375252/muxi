#include <stdio.h>

int main()
{
	int i, num, retry;

	do {
	printf("请输入上限");
       	scanf("%d", &num);
	
        for (i = 0; i <= num; i++) {
		if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}
        printf("\n");
	printf("是否继续【yes···0/no···1】:");
	scanf("%d", &retry);
	} while (retry == 0);
}

