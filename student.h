#pragma once                       //��ʾͷ�ļ�ֻ�ᱻ����һ�� 
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#define MaxSize 50

struct student
{
	int num;
	char name[10];
	int math, english, computer;
	double average;
};