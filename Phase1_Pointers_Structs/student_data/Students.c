#include <stdio.h>
#include "Students.h"

void compute_total(struct Student* Student, int count)
{	
	struct Student* ptr = Student;
	const struct Student* end = Student + count;

	int* struct_ptr = ptr->scores;
	
	while(ptr<end)
	{	
		struct_ptr = ptr->scores;
		int sum = 0;
	    for(int i=0; i<5; i++)
		{
			sum+= *(struct_ptr);
			struct_ptr++;
			
		}
		ptr->total = sum;
		
		ptr++;
	}
}

void Find_Topper(struct Student* Student, int count) 
{
	
	struct Student* ptr = Student;
	const struct Student* end = Student + count;

	struct Student* Topper = ptr;
	
	while(ptr<end)
	{
		if (ptr->total > Topper->total) 
		{
			Topper= ptr;
		}
		ptr++;
	}
	printf("Topper is: %d\n", Topper->total);

}
void compute_average(struct Student* Student, int count) 
{
	const struct Student* ptr = Student;
	const struct Student* end = Student + count;

	float average = 0;
	float sum = 0;
	while (ptr < end)
	{ 
		sum += ptr->total;
	    
		ptr++;
	}
	average = sum / count;
	printf("Average is: %f\n", average);
}
