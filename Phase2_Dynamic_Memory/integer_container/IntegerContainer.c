#include<stdio.h>
#include<stdlib.h>
#include"IntegerContainer.h"

void InitIntList(struct Intlist* list, int capacity)
{
	list->capacity = capacity;
	list->data = malloc(capacity * sizeof(int));
	list->size = 0;
	if (list->data == NULL) 
	{
		list->size = 0;
		list->capacity = 0;
	}
}

void AddInt(struct Intlist* list, int value) 
{
	if (list->data == NULL || list->capacity == 0)
	{
		return;
	}
	
	if (list->size < list->capacity) 
	{
		*(list->data +list->size) = value;
		list->size++;
	}
	else
	{
		int newCapacity = 2 * list->capacity;
		int* temp = realloc(list->data, newCapacity*sizeof(int));
		if (temp == NULL) 
		{
			//Do nothing;
		}
		else 
		{
			list->data = temp;
			list->capacity = newCapacity;
			*(list->data + list->size) = value;
			list->size++;
		}
	}
}

void printList(const struct Intlist* list)
{
	if (list->data == NULL)
	{
		//Do Nothing
		return;
	}
	if (list->size == 0) 
	{	
		printf("The list is empty ");
		return;
	}
	printf("The values of the list are:\n");
	for (int i = 0; i < list->size; i++)
	{
		
		printf("%d\n",list->data[i]);
	}
}

void FreeIntlist(struct Intlist* list) 
{
	if (list->data == NULL)
	{
		//Do Nothing
		return;
	}
	 
	
	free(list->data);
	list->data = NULL;
	list->capacity = 0;
	list->size = 0;
	
	
}