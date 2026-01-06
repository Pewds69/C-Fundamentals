#pragma once
struct Readings
{
	int id;
	int value;
};

void print_readings(const struct Readings* reading, int count);
