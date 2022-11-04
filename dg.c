#include<stdio.h>
int mul(int n)
{
	if (n > 0)
		return n * mul(n-1);
	else
		return 1;
}

int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	printf("!n=%d",mul(num));

	int x;
	while ((x = getchar()) != EOF)
		putchar(x);
		//ctrl+d 结束
}


