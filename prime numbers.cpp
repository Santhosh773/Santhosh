#include<stdio.h>
int main()
{
	int a,i,flag=0;
	printf("enter the value of A: ");
	scanf("%d",&a);
	for(i=2;i++;i<a)
	{
		if(a%i==0){
			flag=1;
			break; 
		}
	}
	if (flag==0)
	printf("the number is  prime");
	else
	printf("the number is  not prime");
	return 0;
}
