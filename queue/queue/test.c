#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueTest1()
{
	QE q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);

	QueueDestroy(&q);
}

void QueueTest2()
{
	QE q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	QueuePush(&q, 6);
	QueuePush(&q, 7);
	QueuePush(&q, 8);
	QueuePush(&q, 9);

	while (!QueueEmpty(&q))
	{
		printf("%d--", QueueTop(&q));
		QueuePop(&q);
	}
	printf("NULL\n");

	QueueDestroy(&q);
}


////////////////////////////////////////////////////////////////////////////////////////////
// 用两个队列实现栈的基本功能

typedef struct
{
    PQE queue_1;
    PQE queue_2;
} MyStack;


MyStack* myStackCreate()
{
    MyStack* st = (MyStack*)malloc(sizeof(MyStack));
    st->queue_1 = (QE*)malloc(sizeof(QE));
    st->queue_2 = (QE*)malloc(sizeof(QE));
    QueueInit(st->queue_1);
    QueueInit(st->queue_2);
    return st;
}

void myStackPush(MyStack* obj, int x)
{
    // 寻找非空的队列，都为空则随机
    PQE EmptyQueue = obj->queue_1;
    PQE NonEmptyQueue = obj->queue_2;
    if (QueueEmpty(NonEmptyQueue))
    {
        NonEmptyQueue = obj->queue_1;
        EmptyQueue = obj->queue_2;
    }

    QueuePush(NonEmptyQueue, x);
}

int myStackPop(MyStack* obj)
{
    // 寻找空的队列
    PQE EmptyQueue = obj->queue_1;
    PQE NonEmptyQueue = obj->queue_2;
    if (QueueEmpty(NonEmptyQueue))
    {
        NonEmptyQueue = obj->queue_1;
        EmptyQueue = obj->queue_2;
    }

    // 从非空的队列中搬移走元素直到只剩一个元素
    while (NonEmptyQueue->phead->next != NULL)
    {
        QueuePush(EmptyQueue, NonEmptyQueue->phead->data);
        NonEmptyQueue->phead = NonEmptyQueue->phead->next;
    }
    int ret = QueueTop(NonEmptyQueue);
    QueuePop(NonEmptyQueue);
    return ret;
}

int myStackTop(MyStack* obj)
{
    // 寻找非空的队列
    PQE NonEmptyQueue = obj->queue_1;
    if (QueueEmpty(NonEmptyQueue))
    {
        NonEmptyQueue = obj->queue_2;
        if (QueueEmpty(NonEmptyQueue))
            return -1;
    }
    return NonEmptyQueue->tail->data;
}

bool myStackEmpty(MyStack* obj)
{
    return QueueEmpty(obj->queue_2) && QueueEmpty(obj->queue_1);
}

void myStackFree(MyStack* obj)
{
    QueueDestroy(obj->queue_2);
    QueueDestroy(obj->queue_1);
    free(obj);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void QueueTest3()
{
  MyStack* pst = myStackCreate();
    myStackPush(pst, 1);
    myStackPush(pst, 2);
    myStackPush(pst, 3);
    myStackPush(pst, 4);
    myStackPush(pst, 5);
    myStackPush(pst, 6);

    while (!myStackEmpty(pst))
    {
        printf("%d ", myStackTop(pst));
        myStackPop(pst);
    }
    printf("\n");

}

int main()
{
	QueueTest3();

	return 0;
}


