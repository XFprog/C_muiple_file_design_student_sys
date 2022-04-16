#include "student.h"
void new_student(struct student students[]);              //extern可省略
extern void output_student(struct student students[]);
extern void average(struct student students[]);
extern void modify(struct student students[]);
extern void sort(struct student students[]);
extern void search_student(struct student students[]);

int count = 0;
int main()
{
	struct student students[MaxSize];    //定义学生信息结构数组
	new_student(students);               //输入学生信息结构数组
	output_student(students);            //显示输入的学生信息结构数组
	average(students);                   //计算每个学生的平均成绩
	sort(students);                      //按学生的平均成绩排序
	output_student(students);            //显示排序后的结构数组
	modify(students);                    //修改指定输入的学生信息
	output_student(students);            //显示修改后的结构数组

	return 0;
}