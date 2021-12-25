// check whether number is positive negative or zero
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Number\n");
    scanf("%d",&a);
    if(a>0)
        printf("Positive");
    else if (a<0)
        printf("Negative");
    else
        printf("zero");
    return 0;
}