#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() 
{
	Queue line;
	Item temp;
	int opt;
	
	initialize_queue(&line);
	
	while(1)
	{
		scanf("%d",&opt);
		getchar();
		switch (opt)
			{
			case 1:
				printf("add char: ");
				scanf("%c", &temp);
				getchar();
				if (!queue_is_full(&line))
				{
					enqueue(temp, &line);
					printf("Putting %c into queue\n", temp);
					printf("%d items in queue\n", queue_item_count(&line));
					puts("Type 1 to add, 2 to delete, 4 to quit:");
				}
				else
					puts("Queue is full");
				break;

			case 2:
				if (queue_is_empty(&line))
				{
					puts("Queue Underflow");
					printf("%d items in queue\n", queue_item_count(&line));
					puts("Type 1 to add, 2 to delete, 4 to quit:");
				}
				else
				{
					dequeue(&temp, &line);
					printf("Removing %c from queue\n", temp);
					printf("%d items in queue\n", queue_item_count(&line));
					puts("Type 1 to add, 2 to delete, 4 to quit:");
				}
				break;

			case 3:
				
				puts("Type 1 to add, 2 to delete, 3 to print, 4 to quit:");
				
				break;
				
			case 4:
				empty_queue(&line);
	            puts("Bye.");
	            exit(0);
				break;
	     	}
	}	
	return 0;
}
