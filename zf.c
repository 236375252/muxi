#include <stdio.h>

int main ()
{
    int num1,num2;
    printf("输入num1与num2:");
    scanf("%d%d",&num1,&num2);
    //输入
    printf("两数之和=%d。\n",num1 + num2);
    printf("两数之差=%d。\n",num1 - num2);
    printf("两数之积=%d。\n",num1 * num2);
    printf("两数之商=%d。\n",num1 / num2);
    printf("两数之余=%d。\n",num1 % num2);
    //运算符号
    printf("两数之商=%f。\n",(double) num1 / num2);
    //()将int转换为double
    printf("两数之商=%5.3f。\n",(double) num1 / num2);
    //%5.3 5表示整数位数，3表示小数位数
}
