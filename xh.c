#include <stdio.h>

int main()
{
    int retry;  //retry询问是否继续

    do {
	int num;

        printf("请输入一个整数：");
        scanf("%d",&num);
  
        if (num % 2 == 0)
	   puts("这个数是偶数");
        else
	   puts("这个数是奇数");

        printf("是否重复【yes···0/no···1】：");
        scanf("%d",&retry);
       } while (retry == 0);
}    
