//create a record of your batch using structure and union
#include<stdio.h>
#include<stdlib.h>
struct record
{
	char firstname[100];
	char lastname[100];
	int roll;
	int age;
	char p_education[100];
	char s_education[100];
	char university[100];
};

int main()
{
	int n;
	printf("Number of students : ");
	scanf("%d", &n);
	struct record s[n];
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("\nFirst name : ");
		scanf("%s", &s[i].firstname);
		printf("Last name : ");
		scanf("%s", &s[i].lastname);
		printf("Roll number : ");
		scanf("%d", &s[i].roll);
		printf("Age : ");
		scanf("%d", &s[i].age);
		printf("Primary Education : ");
		scanf("%s", &s[i].p_education);
		printf("Secondary Education : ");
		scanf("%s", &s[i].s_education);
		printf("University : ");
		scanf("%s", &s[i].university);
		system("cls");
	}
	int rn;
	printf("Which student would you like to see ?(Enter roll number) ");
	scanf("%d", &rn);
	for (i = 0; i < n; ++i)
	{
		if (s[i].roll == rn) break;
	}
	char option;
	printf("What details would you like to see ? ('p' for personal detail/'e' for education) ");
	scanf("%s", &option);
	if (option == 'p')
	{
		printf("\nRoll Number : %d\n", s[i].roll);
		printf("Name : %s %s\n", s[i].firstname, s[i].lastname);
		printf("Age : %d\n", s[i].age);
	}
	else if (option == 'e')
	{
		printf("\nName : %s %s\n", s[i].firstname, s[i].lastname);
		printf("Primary Education : \n", s[i].p_education);
		printf("Secondary Education : \n", s[i].s_education);
		printf("University : \n", s[i].university);
	}
	return 0;
}
