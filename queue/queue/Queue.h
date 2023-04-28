#pragma once
// 链式队列

// 队列初始化 // 队列销毁 // 元素入队 // 元素出队 // 队列取顶 // 队列判空 // 队列大小
//QueueInit   // Queuedestroy // QueuePush // QueuePop //  QueueTop // QueueEmpty // QueueSize

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

// 结点内容
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;


// 队列
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


