#pragma once
struct datapt {
	int data;
	int* next;
};

class LinkedList {
private:
	datapt* front;
	datapt* back;
	int numItems;
public:
	void push_front(datapt*);
	void push_back(datapt*);
	void pop_front();
	void pop_back();
	datapt* front();
	datapt* back();
	bool empty();
	void insert(int, datapt*);
	bool remove(int);
	int find(datapt*);


};