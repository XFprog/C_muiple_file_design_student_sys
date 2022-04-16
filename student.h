#pragma once                       //表示头文件只会被包含一次 
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