// to find grades of student
#include<stdio.h>
int main()
{
    int m1 ,m2,m3,m4,m5,per;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    printf("Maths= %d\nChemistry= %d\n Physics= %d\nBiology= %d \nComputer= %d\n ",m1,m2,m3,m4,m5);
    per= (m1+m2+m3+m4+m5)/5;
    printf("Percentage=%d\n",per);
    if(per>=90)
        printf("GRADE A");
    else if (per>=80)
        printf("GRADE B");
    else if(per>=70)
    printf("GRADE C");
    else if(per>=60)
        printf("GRADE D");
    else
    {
        if (per>=40)
            printf("GRADE E");
        else
            printf("GRADE F");
    }
    return 0;
}