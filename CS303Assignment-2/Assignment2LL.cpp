#include <iostream>

using namespace std;

struct datapt {
	int data;
	datapt* next;
	datapt() {
		data = 0;
		next = nullptr;
	}
	datapt(int data) {
		this->data = data;
		next = nullptr;
	}
};

class SingleLinkedList {
public:
	datapt* front;
	datapt* back;
	int numItems;
	SingleLinkedList() {
		front = nullptr;
		back = nullptr;
		numItems = 0;
	}
	SingleLinkedList(datapt* initiator) {
		front = initiator;
		back = initiator;
		numItems = 1;
	}
	void push_front(datapt* newItem) {//BROKKKEN!
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
	void push_back(datapt* newItem) { // WORKS!!!
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			traversal = traversal->next;
		}
		traversal->next = newItem;
		back = traversal->next;
		numItems++;

	}
	void pop_front() { // BROKEN
		datapt* old;
		old = front;
		front = front->next;
		delete old;
		numItems--;

	}
	void pop_back() { // BROKEN
		datapt* traversal = front;
		while (traversal->next->next != nullptr) {
			traversal = traversal->next;
		}
		delete traversal->next;
		traversal->next = nullptr;
		numItems--;
	}
	datapt* getFront() {
		return front;
	}
	datapt* getBack() {
		return back;
	}
	bool empty() {
		if (numItems == 0) {
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
			if (traversal->data != target) {
				return traversal->data;
			}
			else {
				traversal = traversal->next;
			}
		}
	}
	void printLL() {
		datapt* traversal = front;
		while (traversal->next != nullptr) {
			cout << traversal->data << " ";
			traversal = traversal->next;
		}
		cout << traversal->data << " ";
	}
};