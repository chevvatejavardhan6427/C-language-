#include<stdio.h>
#include<string.h>
int main (){
	char names[4][25]={0};
	int size=sizeof(names)/sizeof(names[0]);
	for(int i=0;i<size;i++){
		printf("enter  name : ");
		fgets(names[i],sizeof(names[i]),stdin);					names[i][strlen(names[i])-1]='\0';
		
	}
	for(int i=0;i<size;i++){
		printf(" %s\n",names[i]);
	}
	return 0;
}
