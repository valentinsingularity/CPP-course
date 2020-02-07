#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

typedef char Item;

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node *next;
} Node;

typedef struct queue
{
	Node *front;
	Node *rear;
	int items;
} Queue;

void initialize_queue(Queue *pq);

int queue_is_full(const Queue *pq);

int queue_is_empty(const Queue *pq);

int queue_item_count(const Queue *pq);

int enqueue(Item item, Queue *pq);

int dequeue(Item *pitem, Queue *pq);

void empty_queue(Queue *pq);

#endif
