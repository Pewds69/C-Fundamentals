
#include<stdio.h>

void print_array(int arr[], int size)
{
	int* p = arr;
	int* end = arr + size;

	while (p < end) 
	{
		printf("%d ", *p);
		p++;
	}

}
int find_max_value(int arr[], int size) 
{
	int* p = arr;
	int* end = arr + size;
	int max = *p;
	while (p < end)
	{
		if (*p > max)
		{
			max = *p;

		}
		p++;
	}
	printf("The max value is :%d\n ", max);
	return max;
	/*int max = *arr;
	for (int i = 1; i < size; i++) 
	{
		if (*(arr+i) > max)
		{
			max = *(arr+i);
		}

	}
	printf("The max value is :%d\n ", max);
	return max;
	*/
}

void normalize(int* arr, int size) 
{	
	//pointer p starts at the beginning of the array
	int* p = arr;
	//pointer end points to one past the last element of the array
	int* end = arr + size;

	int min = *arr;
	
	while(p<end)
	{	
		if(*p <min)
		{	
			min = *p;
		}
		p++;
	}
	//reset pointer p to the beginning of the array
	p = arr;
	printf("The min value is: %d\n", min);
	while(p < end)
	{
		*p = *p - min;
		printf("%d ", *p);
		p++;
		
	}
}

int main(void)
{
	int readings[6] = { 3, 7, 2, 9, 4, 6 };
	
	
	print_array(readings, 6);
	find_max_value(readings, 6);
	normalize(readings, 6);
	return 0;
}