// calculate gross salary
#include<stdio.h>
int main()
{
    int bs,gs;
    float hra,da;
    printf("Basic Salary=   ");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=0.2; da=0.8;
    }
    if(bs<=20000)
    {
        hra=0.25; da=0.9;
    }
    if(bs>20000)
    {
        hra=0.3; da=0.95;
    }
    gs=bs*(1+hra+da);
    printf("Gross Salary=   %d",gs);
    return 0;
}