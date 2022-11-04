#include<stdio.h>
#define spr(x) (x)*(x)
#define PF printf
#define SF scanf
int main()
{
	int n;
	PF("请输入一个整数");
	SF("%d",&n);
	PF("n^2=%d\n", spr(n));

#undef spr(x)
#define spr(x) (x)*(x)*(x)
	PF("n^3=%d\n",spr(n));
}

