//Nested Structures

struct date
{
	int day;
	int month;
	int year;
};

struct person
{
	char firstname[11];
	//struct date DOB;//
	struct date DOB;	//sub structures must be declared before structures they are part of
};

int main()
{
	struct person student;
	//Firstname
	printf("What is your fistname \n"):
	scanf("%s", student.firstname);
	
	//DOB
	//Date
	printf("Enter date of Birth\n");
	scanf("%d", &student.DOB.day);
	
	//Month
	printf("Enter month of Birth\n");
	scanf("%d", &student.DOB.month);
	
	//Year
	printf("Enter year of Birth\n");
	scanf("%d", &student.DOB.year);
	
	
}	
	