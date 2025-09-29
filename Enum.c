//EXAMPLE 1
#include<stdio.h>
enum Status{
	SUCCESS,FAILURE,PENDING
};
int main(){
	enum Status status=PENDING;
	printf("%d",status);
	return 0;
}
//EXAMPLE 2
#include<stdio.h>
typedef enum{
	SUCCESS,FAILURE,PENDING
}Status;
int main(){
	Status status=PENDING;
	printf("%d",status);
	return 0;
}
//EXAMPLE 3
#include<stdio.h>
typedef enum{
	SUCCESS,FAILURE,PENDING
}Status;
void connectStatus(Status status);
int main(){
	Status status=PENDING;
	connectStatus(status);
	return 0;
}
void connectStatus(Status status){
	switch(status){
		case SUCCESS:
			printf("you did it !");
			break;
		case FAILURE:
			printf("try again!");
			break;
		case PENDING:
			printf("dont waste your time!");
			break;
			}
}
		
	 
