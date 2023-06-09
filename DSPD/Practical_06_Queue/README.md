# DSPD Practical 06

A queue is an abstract data type that represents a collection of elements, where the elements are ordered based on the principle of First-In-First-Out (FIFO).

In other words, the element that is added to the queue first is the first element to be removed from the queue. The elements that are added later are placed at the back of the queue and are removed only after the elements that were added earlier.

The basic operations that can be performed on a queue are:

- Enqueue: adds an element to the back of the queue.
- Dequeue: removes the element from the front of the queue.
- Front: returns the element at the front of the queue without removing it.
- Rear: returns the element at the back of the queue without removing it.
- IsEmpty: checks if the queue is empty.
- IsFull: checks if the queue is full.

Enqueue Algorithm:

1. Check if the queue is full. If it is, raise an error or return a failure message.
2. If the queue is not full, add the new element to the end of the queue.
3. Increment the rear pointer to point to the next available position in the queue.

Dequeue Algorithm:

1. Check if the queue is empty. If it is, raise an error or return a failure message.
2. If the queue is not empty, remove the element at the front of the queue and return it.
3. Increment the front pointer to point to the next element in the queue.

A queue can be implemented using an array, a linked list, or a circular buffer. Queues are used in many applications such as operating systems, network protocols, and simulation systems.
