#pragma once
#include <iostream>
using namespace std;
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
	bool remove(int);
	int find(int);
	void printLL();

};