#include <stdio.h>
int main()
{
    float marks;
    printf("enter your mark=");
    scanf("%f",&marks);

    if (marks>=0 && marks<30)
    {printf("GRADE=D");}
   
   else if (marks>30 && marks<= 50)
   {printf("GARDE=C");}

   else if (marks>= 50 &&  marks <= 70)
   {printf("GRADE = B");}

   else if (marks>=70 && marks<=90)
   {printf("GRADE=A");}

   else if (marks>=90 && marks<=100)
   printf("GRADE A+");



   else {printf("you have entred the wrong value kindly recheck");}
   

   return 0;
}
