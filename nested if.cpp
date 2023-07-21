#include<stdio.h>
int main ()
{
 int age,wt,bp;
 printf("enter the age :");
 scanf("%d",&age);
 printf("enter the weight: ");
 scanf("%d",&wt);
 printf("enter the range of blood pressure : ");
 scanf("%d",&bp);
  if(age>18){
 	if (wt>55&&wt<85){
 		if(bp>100&&bp<150){
 		printf("you are eligible to donate blood");
 	    }
	 }
 }
 else{
 	printf("you are not eligible");
 }
 return 0;
}
