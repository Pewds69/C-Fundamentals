#include <stdio.h>
void update(int* ptr)
{

	for (int i = 0; i < 5; i++)
	{
		*ptr += i;
	}
	printf("Final value of x: %d\n", *ptr);
}

int main()
{
	int x = 33;

	int tick = 0;
	int maxTicks = 3;
	while (tick < maxTicks)
	{
		update(&x);
		tick++;
	}

	return 0;
}