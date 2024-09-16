#include "Assignment2LL.h"
struct datapt {
	int data;
	datapt* next;
};

class LinkedList {
private:
	datapt* front = nullptr;
	datapt* back = nullptr;
	int numItems = 0;
public:
	void push_front(datapt* newItem) {
		if (front == nullptr) {
			front = newItem;
			back = newItem;
		}
		else {
			newItem->next = front;
			front = newItem;
		}
	}
	void push_back(datapt*) {

	}
	void pop_front() {
		datapt* old;
		old = front;
		front = front->next;
		delete old;

	}
	void pop_back() {

	}
	datapt* front() {
		return front;
	}
	datapt* back() {
		return back;
	}
	bool empty() {

	}
	void insert(int index, datapt* target) {

	}
	bool remove(int index) {

	}
	int find(datapt* target) {

	}
};