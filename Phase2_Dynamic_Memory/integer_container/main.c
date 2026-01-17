#include<stdio.h>
#include <stdlib.h>
#include"IntegerContainer.h"

int main() 
{
	struct Intlist MyList;
	InitIntList(&MyList,3);
	for (int i = 0; i < 7; i++)
	{
		AddInt(&MyList, i*3);
	}
	printList(&MyList);
	FreeIntlist(&MyList);
	return 0;
}