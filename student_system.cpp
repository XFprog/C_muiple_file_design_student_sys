#include "student.h"
void new_student(struct student students[]);              //extern��ʡ��
extern void output_student(struct student students[]);
extern void average(struct student students[]);
extern void modify(struct student students[]);
extern void sort(struct student students[]);
extern void search_student(struct student students[]);

int count = 0;
int main()
{
	struct student students[MaxSize];    //����ѧ����Ϣ�ṹ����
	new_student(students);               //����ѧ����Ϣ�ṹ����
	output_student(students);            //��ʾ�����ѧ����Ϣ�ṹ����
	average(students);                   //����ÿ��ѧ����ƽ���ɼ�
	sort(students);                      //��ѧ����ƽ���ɼ�����
	output_student(students);            //��ʾ�����Ľṹ����
	modify(students);                    //�޸�ָ�������ѧ����Ϣ
	output_student(students);            //��ʾ�޸ĺ�Ľṹ����

	return 0;
}