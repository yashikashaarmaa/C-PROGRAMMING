#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z') {
    printf("character entred by user is upper case"); }

    else if (ch>='a' &&  ch<='z') {
    printf("charcter entred by user is lower case");}

    else  {
    printf("not english");}

    return 0;


}
