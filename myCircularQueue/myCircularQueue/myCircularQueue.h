#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>




typedef struct
{
    int* q;
    int tail;
    int head;
    int capacity;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return obj->head == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {

    if (obj->tail + 1 == obj->head)
        return true;

    if (obj->tail == obj->capacity && obj->head == 0)
        return true;
    return false;

}

MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue* Queue = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    Queue->q = (int*)malloc(sizeof(int) * (k + 1));
    if (Queue->q == NULL)
    {
        perror("malloc");
        exit(-1);
    }
    Queue->head = 0;
    Queue->tail = 0;
    Queue->capacity = k;
    return Queue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if (myCircularQueueIsFull(obj))
        return false;

    if (obj->tail == obj->capacity)
        obj->tail = 0;
    obj->q[obj->tail] = value;
    obj->tail++;
    

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return false;

    obj->head++;
    if (obj->head == obj->capacity + 1)
        obj->head = 0;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
        return -1;

    return obj->q[obj->head];

}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;

    int tmp = obj->tail - 1;
    if (obj->tail == 0)
        tmp = obj->capacity - 1;
    return obj->q[tmp];

}



void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj->q);
    free(obj);

}
