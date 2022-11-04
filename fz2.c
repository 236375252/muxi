#include <stdio.h>

int main()
{
    int score;
    
    printf("请输入成绩");
    scanf("%d",&score);

    switch(score / 10){
        case 10 : puts("A+"); break;    
        case 9 : puts("A");  break;
        case 8 : puts("B");  break;
	case 7 : puts("C");  break;
        case 6 : puts("D");  break;
        default : puts("F");
    }
}
