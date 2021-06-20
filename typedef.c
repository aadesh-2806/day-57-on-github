typedef int age,roll;
age a1;
roll r1;

typedef int* ptr;
ptr p;


struct Student
{
	int roll;
	char name[20];
	float per;
};
typedef struct Student Stud;


typedef struct Student
{
	int roll;
	char name[20];
	float per;
} Stud;

typedef struct
{
	int roll;
	char name[20];
	float per;
} Stud;

/*----------------*/

Global variable

int t=5;
main()
{
	//Stud a,s;
		printf("%d",t);
}

Global object

struct Student
{
	int roll;
	char name[20];
	float per;
};
struct Student s1;
main()
{
	
}

struct Student
{
	int roll;
	char name[20];
	float per;
} s1,s2;
main()
{
	s1.roll = 5;	
}
