#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2;
    int a,b,c;
    printf("Coffients of X**2 , X and constant\n");
    scanf("%d %d %d",&a,&b,&c);
    x1= (-1*b+sqrt(b*b-4*a*c))/(2*a);
    x2= (-1*(b+sqrt(b*b-4*a*c)))/(2*a);
    printf("roots of quadratic equations are %f\n%f",x1,x2);
    return 0;

}