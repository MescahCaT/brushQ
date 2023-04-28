#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(PQE pq)
{
	pq->phead = NULL;
	pq->tail = NULL;
}

void QueueDestroy(PQE pq)
{
	while (pq->phead)
	{
		QNode* del = pq->phead;
		pq->phead = pq->phead->next;
		free(del);
	}
	pq->tail = NULL;
	
}


void QueuePush(PQE pq, QDataType x)
{
	assert(pq);

	// ĞÂ½áµã
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->phead == NULL)
	{
		pq->phead = newnode;
		pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

void QueuePop(PQE pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	
	QNode* del = pq->phead;
	pq->phead = pq->phead->next;
	free(del);
	if (pq->phead == NULL)
		pq->tail = NULL;
}

bool QueueEmpty(PQE pq)
{
	assert(pq);
	return pq->phead == NULL;
}

QDataType QueueTop(PQE pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->phead->data;
}

size_t QueueSize(PQE pq)
{
	assert(pq);

	size_t count = 0;
	QNode* cur = pq->phead;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;

}

