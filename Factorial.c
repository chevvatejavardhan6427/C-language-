#include<stdio.h>
int main(){
	int i,n,total=1;
	printf("enter a number to get its factorial : ");
	scanf("%d",&n);
	for( i=n;i>=1;i-=1){
		total*=i;
	}
	printf("factorial of %d is %d",n,total);
	return 0;
}
		
