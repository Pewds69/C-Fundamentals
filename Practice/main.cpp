#include<stdio.h>
#include "Pointer_Traversal.h"
#include "Structs.h"

int main(void)
{
	int readings[6] = { 3, 7, 2, 9, 4, 6 };
	struct Readings reading[5]
	{
		{1, 10},
		{2, 20},
		{3, 30},
		{4, 40},
		{5, 50}

	};
	print_array(readings, 6);
	find_max_value(readings, 6);
	normalize(readings, 6);
	print_readings(reading, 5);
	return 0;
}