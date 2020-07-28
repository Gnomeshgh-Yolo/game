#include<stdio.h>
#include<stulib.h>
int main()
{
    int a,b;
    a=1;
    while(a>=5)
    {
        b=1;
        while(b<=a)
        {
            printf("*");
            b=b+1;
        }
        printf("\n");
        a=a+1;
    }
    system("pause");
    return 0;
}