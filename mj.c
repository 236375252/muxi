#include<stdio.h>
enum month { out, Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

void Spring(void)
{
	puts("It's spring.");
}
void Summer(void)
{
	puts("It's summer.");
}
void Autumn(void)
{
        puts("It's autumn.");
}
void Winter(void)
{
        puts("It's winter.");
}
enum month secsons(void)
{
	int nums;
	do {
		printf("输入月份");
		scanf("%d",&nums);
	} while (nums < Jan || nums > Dec);
	return nums;
}
int main(void)
{
	enum month secson;
	do {
		switch (secson = secsons()) {
			case Jan: Winter(); break;
			case Feb: Spring(); break;
			case Mar: Spring(); break;
			case Apr: Spring(); break;
			case May: Summer(); break;
			case Jun: Summer(); break;
			case Jul: Summer(); break;
			case Aug: Autumn(); break;
			case Sep: Autumn(); break;
			case Oct: Autumn(); break;
			case Nov: Winter(); break;
			case Dec: Winter(); break;
		}
	} while (secson < Jan || secson > Dec);
}
