#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static void copy_to_node(Item item, Node *pn);
static void copy_to_item(Node *pn, Item *pi);

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if(queue_is_full(pq)) return 0;
	Node* newnode=(Node*) malloc(sizeof(Node));
	copy_to_node(item,newnode);
	newnode->next=NULL;
	if(queue_is_empty(pq)) pq->front=newnode;
	else (pq->rear)->next=newnode;
	pq->rear=newnode;
	(pq->items)++;
	return 1;
}

int dequeue(Item *pitem, Queue *pq)
{
	if(queue_is_empty(pq)) return 0;
	Node* oldnode=pq->front;
	pq->front=(pq->front)->next;
	(pq->items)--;
	copy_to_item(oldnode,pitem);
	free(oldnode);
	if(queue_is_empty(pq))
	{
		pq->front=NULL;
		pq->rear=NULL;
	}
	return 1;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq))
		dequeue(&dummy, pq);
}

static void copy_to_node(Item item,Node *pn)
{
	pn->item = item;
}

static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}

