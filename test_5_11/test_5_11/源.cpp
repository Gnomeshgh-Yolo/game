#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
int main()
{
	float F, M, C;
	int Se, Sp, Ha;
	printf("what is your sex(1:boy,2:girl): ");
	scanf("%d", &Se);
	printf("Do you like sport(1:Yes,2:No):  ");
	scanf("%d", &Sp);
	printf("Have you a good habit(1:Yes,2:No): ");
	scanf("%f", &Ha);
	printf("mother: ");
	scanf("%f", &M);
	printf("father: ");
	scanf("%f", &F);
	if (Se == 1)
	{
		C = (F + M)*0.54;
	}
	if (Se == 2)
	{
		C = (F*0.92 + M) / 2;
	}
	if (Ha == 1)
	{
		C = C*1.015;
	}
	if (Sp == 1)
	{
		C = C*1.02;
	}
	printf("child:%.2f\n", C);
	return 0;
}