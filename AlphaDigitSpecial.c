// to check that number is alphabet , digit or special chracter
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter chracter\n");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        printf("Alphabet");
    if(ch>=48 && ch<=57)
        printf("Digit");
    if ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
        printf("Special Symbol");
    return 0;
}