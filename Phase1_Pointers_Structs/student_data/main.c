#include<stdio.h>
#include"Students.h"

struct Student Student[3]=
{
	{1,{22,34,55,66,88},0},
	{2,{82,34,45,96,98},0},
	{3,{77,75,85,96,98},0}
};
int main() 
{
	compute_total(Student, 3);
	Find_Topper(Student, 3);
	compute_average(Student, 3);
   return 0;
	
}
