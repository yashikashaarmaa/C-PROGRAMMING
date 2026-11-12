#include <stdio.h>
int main()
{
int n;
printf("enter your n=");
scanf("%d",&n);





    int sum = 0;

    for (int i = 1; i <= n; i += 1)
    {
        sum += i; 
    }

printf("Sum = %d\n", sum);
    return 0;
}


