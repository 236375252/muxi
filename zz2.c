#include<stdio.h>
int main()
{
    int a=0x12345678, b=0xabcdef98;
    char *p1,*p2;
    printf("%0x %0x\n",a,b);
    p1=(char*)&a;
    p2=(char*)&b;
    printf("%0x %0x\n",*p1,*p2);
    p1++; p2++;
    printf("%0x %0x\n",*p1,*p2);
}
