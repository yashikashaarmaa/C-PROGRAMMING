#include <stdio.h>
int main()
{
int n;
printf("enter your n=");
scanf("%d",&n);
int multi;
for (int i=1; i<=10; i++) {

multi= i*n;
printf("%d*%d is %d\n", n, i, multi);

}




    
    return 0;
}


