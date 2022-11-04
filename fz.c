#include <stdio.h>

int main ()
{
    int n1, n2, n3, max, max1;

    puts("请输入三个数");
    printf("n1="); scanf("%d",&n1);
    printf("n2="); scanf("%d",&n2);
    printf("n2="); scanf("%d",&n3);

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    printf("max=%d\n",max);

    max1 = (n1 > n2) ? n1:n2;
    max = (max1 > n3) ? max1:n3;
    //如果（）成立则为：前，反之为：后
    printf("main1=%d\n",max);

}













