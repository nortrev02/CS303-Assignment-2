#include <vector>
#pragma once

struct datapt {
	int data;
	datapt* next;
	datapt();
	datapt(int);
};

class SingleLinkedList {
public:
	datapt* front;
	datapt* back;
	int numItems;
	SingleLinkedList();
	SingleLinkedList(datapt*);  
	void push_front(datapt*);
	void push_back(datapt*);
	void pop_front();
	void pop_back();
	datapt* getFront();
	datapt* getBack();
	bool empty();
	void insert(int, datapt*);
	void remove(int);
	int find(int);
	void printLL();

};

class vectorStack {
public:
	std::vector<int> mainVector;
	int stackSize;
	vectorStack(int);
	bool isEmpty();
	void push(int);
	void pop();
	int top();
	int average();
};