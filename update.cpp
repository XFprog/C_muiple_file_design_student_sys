#include "student.h"
extern int count;

void modify(struct student students[])
{
	int i,j,num,option;
	printf("Enter student's number to modify: ");
	scanf("%d", &num);
	for (i = 0; i < count; i++)
	{
		if (num == students[i].num)
		{
			num = i;
			break;
		}
		if (i>=count)
		{
			printf("No this number\n");
			return;
		}
	}
	printf("Enter name(1)/math(2)/english(3)/computer(4):");
	scanf("%d", &option);
	switch (option)
	{
	case 1:printf("Enter value: "), scanf("%s", students[num].name); break;
	case 2:printf("Enter value: "), scanf("%d", &students[num].math); break;
	case 3:printf("Enter value: "), scanf("%d", &students[num].english); break;
	case 4:printf("Enter value: "), scanf("%d", &students[num].computer); break;
	default:printf("No this option\n"); break;
	}
}
void sort(struct student students[])
{
	int i,j,index;
	struct student temp;
	printf("After sorted:\n");
	for (i = 0; i < count-1; i++)
	{
		index = i;
		for (j = i+1; j < count; j++)
		{
			if (students[index].average > students[j].average) index = j;
		}
		temp = students[i];
		students[i] = students[index];
		students[index] = temp;
	}
}