/*
struct student_rec
{
	char firstname[10];
	char surname [21];		//all these elements are called structure members
	int id;
	int results[5];
};		//semi-colon required
*/



//Where to place in program

//1. Headers
#include <stdio.h>
#include <string.h>

//2. Symbolic Names
#define SIZE 5


//3. Structure templates
struct student_rec
{
	char firstname[10];
	char surname [21];		
	int id;
	int results[5];
};	
//4. Function Signatures

int main()
{
	struct student_rec stu1,stu2;	//data type student_rec structure //varibles stu1 & stu2
	int i;
	//can create array of stu1,stu2,3 etc
	
	//stu1 hard-code
	//stu2 user-input
	
	//stu1
	//stu1.firstname=		//cannot enter string using string array="..." only on intialisation
	strcopy(stu1.firstname, "Joe");
	strcopy(stu1.surname, "Bloggs");
	stu1.id=1234;
	
	printf("Enter 5 results \n");
	for(i=0;i<SIZE;i++)
	{
		scanf(%d,&stu1.results[i]);
	}
	
	
	//stu2
	printf("What is your 1st name? \n")
	gets(stu2.firstname);
	
	printf("What is your 2nd name \n");
	gets(stu2.surname);
	
	printf("What is your ID number?\n);
	scanf("%d", &stu2.id);
	
	printf("Enter your results one by one \n);
	for i=0;i<SIZE;i++)
	{
		scanf(%d,&stu2.results[i]);
	}
	
	
	
	
	
	
	
	
	//To do by strings	no null character required
	struct student_rec st1={"Mary",
							"Smith",
							4567,
							{70,91,85,68,41}
						   };
						   
						   //Must follow order of structure
	
}


//To point at structure
struct student_rec *ptr;
ptr=&stu1;


//printf("%s",(*ptr)firstname);
printf("Firstname is %s", ptr->firstname);

