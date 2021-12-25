// to check input is alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter chracter\n");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        printf("Alphabet");
    else
        printf("Not Alphabet");
    return 0;
}