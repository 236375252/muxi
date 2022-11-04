#include <stdio.h>

int main()
{
	int num, i;

	printf("请输入一个整数");
	scanf("%d", &num);

	for ( i = 1 ; i <= num; i++)
		putchar('*');
	putchar('\n');
}


