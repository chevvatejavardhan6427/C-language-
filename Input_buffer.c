#include<stdio.h>  //preproccesor directive
#include<string.h>
int main(){               //main fn stats here
	int age;
	float gpa;
	char grade;
	char name[50];
	printf("enter your age : ");
	scanf("%d",&age);
	printf("enter your gpa : ");
	scanf("%f",&gpa);
	printf("enter your grade : ");
	scanf(" %c",&grade);//(' '%c)the space before %is due to input buffer in also stores \n when we enter give give our input ,the char accept it as a char and it doesn't give chance to enter grade this space remove all before data in input buffer .
	getchar(); //same purpose like above (' '%c)
	printf("enter your name : ");
	fgets(name,sizeof(name),stdin);
	name[strlen(name)-1]='\0'; //to remove \n after entering a name we made the last char of name (\n)as '\0' that means entering input is over
	printf("%s\n",name);
	printf("%d\n",age);
	printf("%.2f\n",gpa);
	printf("%c\n",grade);
	
	return 0;
}
