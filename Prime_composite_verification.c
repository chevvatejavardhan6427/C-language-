#include<stdio.h>
int main(){
	int a,i,isprime= 1;
	printf("print any number to check \n whether it's prime or composite number : ");
	scanf("%d",&a);
	for(i=2;i<a;i++){
			if(a%i==0){
				isprime=0;
				break;
			}
	}
	if(isprime==1){
				printf("its a prime number\n");
			}else{
				printf("its a composite nuber");
			}
		return 0;
}

