#include <stdio.h>
int main()
{
int n;
printf("enter your n=");
scanf("%d",&n);


    int sum = 0;

    for (int i = 1,j=n; i <= n && j>=1; i += 1, j--)
    {
        sum += i; 
        printf("%d\n",j);
    }

printf("Sum = %d\n", sum);
    return 0;
}

