#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int STDateType;

typedef struct Stack
{
	STDateType* _a;
	STDateType _top; //ջ���±�
	STDateType _capacity;
}Stack;

//��ʼ��������
void StackInit(Stack* pst);
void StackDestory(Stack* pst);

//��ջ
void StackPush(Stack* pst, STDateType x);
//��ջ
void StackPop(Stack* pst);
//��ȡ���ݸ���
int StackSize(Stack* pst);

//����1�ǿգ�����0�Ƿǿ�
int StackEmpty(Stack* pst);
//��ȡջ��������
STDateType StackTop(Stack* pst);