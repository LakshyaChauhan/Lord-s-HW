// Greatest Between 3 numbers
#include<stdio.h>
int main()
{
    int a, b ,c;
    printf("Enter values of A , B and C");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        printf("A is greatest");
    else
        if(b>a && b>c)
            printf("B is Greatest");
        else
            printf("C is Greatest");
    return 0;
}