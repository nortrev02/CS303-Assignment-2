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
		if (numItems == 0) {
			front = newItem;
			back = newItem;
		}
		else{
			datapt* traversal = front;
			while (traversal->next != nullptr) {
				traversal = traversal->next;
			}
			traversal->next = newItem;
			back = traversal->next;
		}
		numItems++;

	}
	void pop_front() {
		datapt* old;
		old = front;
		front = front->next;
		old->next = nullptr;
		if (old == back) {
			back = nullptr;
		}
		numItems--;

	}
	void pop_back() { // BROKEN
		datapt* traversal = front;
		if (traversal->next == nullptr) {
			front = nullptr;
			back = nullptr;
		}
		else{
			while (traversal->next != back) {
				traversal = traversal->next;
			}
			traversal->next = nullptr;
			back = traversal;
		}

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
	void insert(int index, datapt* newItem) {
		int iterator = 0;
		datapt* traversal = front;
		if (index == 0) {
			push_front(newItem);
		}
		else {
			while (traversal->next != nullptr) {
				traversal = traversal->next;
				iterator++;
				if (iterator + 1 == index) {
					datapt* temp = traversal->next;
					traversal->next = newItem;
					newItem->next = temp;
				}
			}
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