#include <stdio.h>

int main()
{
    int i, num;

    printf("请输入一个整数:");
    scanf("%d",&num);

    i = 0;
    while (i <= num) {
	    printf("%d ", i++);
	    }
    printf("\n");
}
