// Check whether alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("Input alphabet\n");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='E' || ch=='I'
    || ch=='O' || ch=='U')
        printf("Vowel");
    else    
        printf("Consonant");
    return 0;
}