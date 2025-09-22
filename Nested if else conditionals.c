#include <stdio.h>
#include <stdbool.h>
int main(){
	int ticket=10;
	int total;
	bool isstudent=false;
	bool issenior=true;
	if(isstudent){
		if(issenior){
			total=0.7*ticket;
			printf("as a student and senior you will get 30 off so your ticket is $%d",total);
		}
		else{
			total=0.9*ticket;
			printf("as a student you will get 10 off ,so your ticket price is $%d",total);
		}
	}
	else{
		total=0.8*ticket;
		printf("as a senior you will get 20 off so your ticket is $%d",total);
	}

	return 0;
	}
		
