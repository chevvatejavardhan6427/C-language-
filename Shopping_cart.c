#include <stdio.h>
#include <string.h>
int main(){
	char item[50];
	float price;
	int quantity;
	float total;
	char currency='$';
	printf("which item would you lile buy : ");  
	fgets(item,sizeof(item),stdin);
	printf("price of each : ");
	scanf("%f",&price);
	printf("how many items do you buy : ");
	scanf("%d",&quantity);
	total=quantity*price;
	printf("you have bought %d %s",quantity,item);
	printf("your bill is %c%.2f",currency,total);
	
	return 0;
}
