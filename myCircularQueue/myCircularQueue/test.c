#define _CRT_SECURE_NO_WARNINGS 1
#include"myCircularQueue.h"

void test1()
{
	MyCircularQueue* my_circular_queue = myCircularQueueCreate(4);
	bool ret = myCircularQueueEnQueue(my_circular_queue, 1);
	ret = myCircularQueueEnQueue(my_circular_queue, 2);
	ret = myCircularQueueEnQueue(my_circular_queue, 3);
	ret = myCircularQueueEnQueue(my_circular_queue, 4);
	ret = myCircularQueueEnQueue(my_circular_queue, 5);
	printf("%d ", myCircularQueueFront(my_circular_queue));

	ret = myCircularQueueDeQueue(my_circular_queue);
	ret = myCircularQueueDeQueue(my_circular_queue);
	ret = myCircularQueueDeQueue(my_circular_queue);
	ret = myCircularQueueDeQueue(my_circular_queue);

	printf("%d ", myCircularQueueRear(my_circular_queue));


	ret = myCircularQueueDeQueue(my_circular_queue);
	ret = myCircularQueueEnQueue(my_circular_queue, 5);
	ret = myCircularQueueEnQueue(my_circular_queue, 6);
	ret = myCircularQueueEnQueue(my_circular_queue, 7);

	myCircularQueueFree(my_circular_queue);

}



int main()
{
	test1();

	return 0;
}