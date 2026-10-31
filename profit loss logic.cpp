#include<stdio.h>
int main (){
int profit,loss,sp,cp;	

printf("enter the value of sp=");
scanf("%d",&sp);

printf("enter the value of cp=");
scanf("%d",&cp);

if(sp>cp) {

profit=sp-cp;
printf("profit value  is %d",profit); }

else if (cp>sp)
{
loss=cp-sp;
	printf("loss value  is %d",loss);}
	
	else 
{
		printf("no profit no loss"); }
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}