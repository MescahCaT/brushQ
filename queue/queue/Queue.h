#pragma once
// ��ʽ����

// ���г�ʼ�� // �������� // Ԫ����� // Ԫ�س��� // ����ȡ�� // �����п� // ���д�С
//QueueInit   // Queuedestroy // QueuePush // QueuePop //  QueueTop // QueueEmpty // QueueSize

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

// �������
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;


// ����
typedef struct Queue
{	
	QNode* phead;
	QNode* tail;
}QE,*PQE;

void QueueInit(PQE pq);
void QueueDestroy(PQE pq);
void QueuePush(PQE pq, QDataType x);
void QueuePop(PQE pq);
bool QueueEmpty(PQE pq);
QDataType QueueTop(PQE pq);
size_t QueueSize(PQE pq);


