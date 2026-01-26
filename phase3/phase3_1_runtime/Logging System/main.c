#include"Log.h"
#include"core.h"
#include<stddef.h>
int main()
{
	int* Null = NULL;
	enum InitStatus result = init_buffer(Null, -10);
	if (result!= INIT_OK)
	{
		log_error("INVALID ARGUMENT PASSED.");
	}
	return 0;
}
