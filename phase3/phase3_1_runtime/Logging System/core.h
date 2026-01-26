#pragma once

enum InitStatus
{
	INIT_OK = 0,
	INIT_INVALID_ARGUMENT
};
enum InitStatus init_buffer(int* ptr, int size);
