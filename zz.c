#include<stdio.h>
int main()
{
	int a=100, b=200;
	int *p1,*p2=&b;
	p1=&a;//&取地址
	int num;
	num=*p1;//*取值 与num=a相同
	printf("%d\n",a);
	printf("%d\n",*p1);
	printf("%d\n",num);
	printf("%d\n",*p2);
	printf("%d\n",sizeof(p1));
	return 0;
}



