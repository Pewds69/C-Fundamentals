#pragma once
struct Intlist
{
    int* data;
    int size;
	int capacity;
};
void InitIntList(struct Intlist* list, int capacity);
void AddInt(struct Intlist* list, int value);
void printList(const struct Intlist* list);
void FreeIntlist(struct Intlist* list);