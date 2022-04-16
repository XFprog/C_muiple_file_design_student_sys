#include "student.h"
extern int count;

void new_student(struct student students[])
{
	int i;
	printf("Enter the number of student: ");
	scanf("%d", &count);
	printf("Enter the info of %d students: \n", count);
	printf("number/name/math/english/computer\n");
	for (i = 0; i < count; i++)
	{
		printf("No.%d: ", i+1);
		scanf("%d%s%d%d%d", &students[i].num, students[i].name, &students[i].math,
		&students[i].english, &students[i].computer);
	}
}
void output_student(struct student students[])
{
	int i;
	printf("student's information: number/name/math/english/computer\n");
	for (i = 0; i < count; i++)
	{
		printf("%d\t%s\t%d\t%d\t%d\n", students[i].num, students[i].name,
		students[i].math,students[i].english,students[i].computer);
	}
}