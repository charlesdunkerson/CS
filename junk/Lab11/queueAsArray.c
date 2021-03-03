/** queueAsArray.c
 * ===========================================================
 * Name: First Last
 * Section: xxx
 * Project: Lab11 - Queue ADT implemented with C array
 * ===========================================================
 */
#include "queueAsArray.h"

#include <stdio.h>

/** Task 0) - write the implementations for circular queue functions
 * 0) implement functions below
 * 1) test each function in Lab09_queue.c prior to completing
 * the DMV application.
 */

/** enqueue() - adds an element to the back of the queue
 * @param queue - a ptr to the queue structure
 * @param element - the item to add to the queue
 * @return 1 on success, -1 on failure
 */
int enqueue(QueueAsArray* queue, int element) {
    if (!queueIsFull(queue))
    {    
        queue->number[queue->back] = element;
        queue->back++;
        return 1;
    }
    else
    return -1;
}

/** dequeue() - removes an element from the front of the queue
 * @param queue - a ptr to the queue structure
 * @return - the top of the queue on success, -1 on failure
 */
int dequeue(QueueAsArray* queue) {
    if (!queueIsEmpty(queue))
    {
        int number = queue->number[queue->front];
        queue->front++;
        return number;
    } else {
        return -1;
    }
}

/** queueIsEmpty() - determines if the queue is empty
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is empty or false
 */
bool queueIsEmpty(QueueAsArray* queue) {
    if (queue->front ==  - 1)
    {
        return true;
    }
    
    return false;
}

/** queueIsFull() - determines if the queue is full
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is full or false
 */
bool queueIsFull(QueueAsArray* queue) {
    if (queue->back == QUEUE_MAX_SIZE - 1)
    {
        return true;
    }
    
    return false;
}

/** queueInit() - initializes the queue structure
 * @param queue - a ptr to the queue structure
 */
void queueInit(QueueAsArray* queue) {
    queue->front = 1;
    queue->back = 1;
}


/** queuePeek() - returns the item on the front of the
 * queue but doesn't remove it
 * @param queue - a ptr to the queue structure
 * @return - the item at the front of the queue or -1 on failure
 */
int queuePeek(QueueAsArray* queue) {
    if (!queueIsEmpty(queue))
    {
        return queue->number[queue->front];
    }
    return -1;
}

/** queueSize() - determines the size of the queue
 * @param queue - a ptr to the queue structure
 * @return - number of items in the queue
 */
int queueSize(QueueAsArray* queue) {
    return queue->back - queue->front;
}

/** queuePrint() - outputs the queue to the console
 * @param queue - ptr to the queue structure
 */
void queuePrint(QueueAsArray* queue) {
    for (int i = queue->front; i >=1 ; i--)
    {
        printf("%d: '%d'\n", i, queue->number[i]);
    }
    printf("\n");
}