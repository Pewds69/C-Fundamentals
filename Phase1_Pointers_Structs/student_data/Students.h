#pragma once

struct Student
{
	int id;
	int scores[5];
	int total;
};
void Find_Topper(struct Student* Student, int count);
void compute_average(struct Student* Student, int count);
void compute_total(struct Student* Student, int count);