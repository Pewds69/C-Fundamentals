#include <stdio.h>
#include "Structs.h"


void print_readings(const struct Readings* reading, int count) 
{
	const struct Readings* Ptr = reading;
	const struct Readings* end = reading + count;
	

	while (Ptr < end)
	{
		printf("%d,%d \n", Ptr->id, Ptr->value);
		Ptr++;
	}
}