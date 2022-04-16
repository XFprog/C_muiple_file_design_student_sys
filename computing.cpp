#include "student.h"
extern int count;

void average(struct student students[])
{
	int i;
	for (i = 0; i < count; i++)
	{
		students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
	}
}