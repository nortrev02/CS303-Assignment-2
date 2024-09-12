#pragma once
struct datapt {
	int data;
	int* next;
};

class LinkedList {
private:
	datapt head;
	int listSize;
};