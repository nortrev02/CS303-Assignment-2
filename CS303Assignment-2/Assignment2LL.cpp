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
		numItems++;
	}
	void push_back(datapt* newItem) {
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			traversal = traversal->next;
		}
		traversal->next = newItem;
		back = traversal->next;
		numItems++;

	}
	void pop_front() {
		datapt* old;
		old = front;
		front = front->next;
		delete old;
		numItems--;

	}
	void pop_back() {
		datapt* traversal = front;
		while (traversal->next->next != nullptr) {
			traversal = traversal->next;
		}
		delete traversal->next;
		traversal->next = nullptr;
		numItems--;
	}
	datapt* front() {
		return front;
	}
	datapt* back() {
		return back;
	}
	bool empty() {
		if (front == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert(int index, datapt* newItem) { // unfinished
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			traversal = traversal->next;
		}
		numItems++;
	}
	bool remove(int index) { // unfinished
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			traversal = traversal->next;
		}
		numItems--;
	}
	int find(int target) { // unfinished
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			if(traversal)
			traversal = traversal->next;
		}
	}
};