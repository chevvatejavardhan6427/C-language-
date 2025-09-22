#include<stdio.h> 
#include<windows.h> 
int main(){
	int n;
	printf("enter no of seconds : ");
	scanf("%d",&n);
	for(int i=n;i>=0;i-=1){
		sleep(1);
		printf("%d\n",i);
	}
	printf("time up !");
	return 0;
}
