// Number is divsible by 5 and 11
#include<stdio.h>

int main()
{
    int a ;
    printf("Input Values of A\n");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
        printf("Divisible by 5 and 11");
    else 
        printf("Not divisible");
    return 0;
}


