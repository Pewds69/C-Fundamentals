#include<stdio.h>
#include<stdlib.h>

struct EngineState {
	int tick;
	int version;
	char status;
};
enum FileResult
{
	FILE_OK,
	FILE_OPEN_FAILED,
	FILE_IO_FAILED

};

enum FileResult save_state(const char* filename, struct EngineState* state)
{	
	FILE* fptr;
	if ((fptr = fopen(filename, "wb")) == NULL)
	{
		return FILE_OPEN_FAILED;
	}
	if (fwrite(state, sizeof(struct EngineState), 1, fptr)!= 1) 
	{
		fclose(fptr);
		return FILE_IO_FAILED;
	}
	fclose(fptr);
}
int main()
{
	
}