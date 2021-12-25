// to print number of days in month by giing input month number
#include<stdio.h>
int main()
{
    int a,yr;
    printf("Enter Year and Month Number\n");
    scanf("%d %d",&yr,&a);
    if(a==2)
        printf("For leap year 29 Days\n28 Days for normal year ");
    else if(a<=12)
    {
        if(a<=7 && a%2==1)
            printf("31 days");
        else if (a>7 && a%2==0)
            printf("31 days");
        else
            printf("30 Days");
    }
    else
        printf("Error: 12 months are there in a year");
    return 0;

}