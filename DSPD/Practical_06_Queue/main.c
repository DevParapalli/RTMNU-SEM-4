#include <stdio.h>
#include <stdlib.h>

struct IntegerQueueImpl {
    int front, rear;
    unsigned size;
    int *array;
};

struct IntegerQueueImpl *createQueue(unsigned size) {
    struct IntegerQueueImpl *queue = (struct IntegerQueueImpl *)malloc(sizeof(struct IntegerQueueImpl));
    queue->size = size;
    queue->front = queue->rear = -1;
    queue->array = (int *)malloc(queue->size * sizeof(int));
    return queue;
}

int isFull(struct IntegerQueueImpl *queue) {
    return queue->rear == queue->size - 1;
}

int isEmpty(struct IntegerQueueImpl *queue) {
    return queue->front == -1;
}

void enqueue(struct IntegerQueueImpl *queue, int item) {
    if (isFull(queue)) {
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->array[++(queue->rear)] = item;
}

int dequeue(struct IntegerQueueImpl *queue) {
    if (isEmpty(queue)) {
        return -1;
    }
    int item = queue->array[queue->front];
    if (queue->front == queue->rear) {
        // If this is the last element in the queue
        queue->front = queue->rear = -1;
    } else {
        queue->front++;
    }
    return item;
}

void printQueue(struct IntegerQueueImpl *queue) {
    if (isEmpty(queue)) {
        return;
    }
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d\t", queue->array[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    struct IntegerQueueImpl *queue = createQueue(100);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    enqueue(queue, 60);
    enqueue(queue, 70);
    enqueue(queue, 80);

    printQueue(queue);

    printf("Dequeued item is %d\n", dequeue(queue));
    printf("Dequeued item is %d\n", dequeue(queue));
    printf("Dequeued item is %d\n", dequeue(queue));

    printQueue(queue);
}
