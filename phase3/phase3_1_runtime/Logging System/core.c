#include"core.h"
#include<stddef.h>

enum InitStatus init_buffer(int* ptr, int size) 
{
	if (ptr == NULL)
	{
		return INIT_INVALID_ARGUMENT;
	}
	if (size <= 0) 
	{
		return INIT_INVALID_ARGUMENT;
	}
	return INIT_OK;
}