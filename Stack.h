#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int STDateType;

typedef struct Stack
{
	STDateType* _a;
	STDateType _top; //栈顶下标
	STDateType _capacity;
}Stack;

//初始化和销毁
void StackInit(Stack* pst);
void StackDestory(Stack* pst);

//入栈
void StackPush(Stack* pst, STDateType x);
//出栈
void StackPop(Stack* pst);
//获取数据个数
int StackSize(Stack* pst);

//返回1是空，返回0是非空
int StackEmpty(Stack* pst);
//获取栈顶的数据
STDateType StackTop(Stack* pst);