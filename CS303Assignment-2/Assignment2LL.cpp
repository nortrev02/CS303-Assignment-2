#include <iostream>
#include <vector>

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
	SingleLinkedList() { // default constructor
		front = nullptr;
		back = nullptr;
		numItems = 0;
	}
	SingleLinkedList(datapt* initiator) { // cpnstructor when given an initial datapt
		front = initiator;
		back = initiator;
		numItems = 1;
	}
	void push_front(datapt* newItem) { // pushes the given datapt to the front of the linked list
		if (numItems == 0) {
			front = newItem;
			back = newItem;
		}
		else {
			newItem->next = front;
			front = newItem;
		}
		numItems++;
	}
	void push_back(datapt* newItem) { // pushes the given datapt to the back of the linked list
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
	void pop_front() { // deletes the first value of the linked list
		datapt* old;
		old = front;
		front = front->next;
		old->next = nullptr;
		if (old == back) {
			back = nullptr;
		}
		numItems--;

	}
	void pop_back() { // deletes the last value of the linked list
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
	datapt* getFront() {// returns the first value in the list
		return front;
	}
	datapt* getBack() { // returns the last value in the list
		return back;
	}
	bool empty() { // returns a bool if the list is empty or not
		if (numItems == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert(int index, datapt* newItem) { // inserts a datapt at the given index
		int iterator = 0;
		datapt* traversal = front;
		if (index == 0) {
			push_front(newItem);
		}
		else if(index > numItems) {
			push_back(newItem);
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
			numItems++;
		}
	}
	void remove(int index) { // removes a value from the linked list if found
		int iterator = 0;
		datapt* traversal = front;
		if (index == 0) {
			pop_front();
		}
		else if (index > numItems) {
			pop_back();
		}
		else {
			while (traversal->next != nullptr) {
				traversal = traversal->next;
				iterator++;
				if (iterator + 2 == index) {
					datapt* temp = traversal->next->next;
					traversal->next = temp;
				}
			}
			numItems--;
		}
	}
	int find(int value) { //returns the value of a given index
		datapt* traversal = front;
		while (traversal != nullptr && traversal->next != nullptr) {
			if (traversal->data == value) {
				return traversal->data;
			}
			else {
				traversal = traversal->next;
			}
		}
		return numItems;
	}
	void printLL() { // prints all the values in the linked list
		datapt* traversal = front;
		if (traversal != nullptr){
			while (traversal->next != nullptr) {
				cout << traversal->data << " ";
				traversal = traversal->next;
			}
			cout << traversal->data << " ";
		}
		else {
			cout << "Linked List is Empty!" << endl;
		}
	}
};

class vectorStack {
public:
	std::vector<int> mainVector;
	int stackSize = 0;
	vectorStack(int num) { //constructor for stack
		mainVector.push_back(num);
		stackSize++;
	}
	bool isEmpty() { //checks if the stack is empty and returns a bool.
		if (stackSize == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	void push(int newItem) { //pushes an item to the top of the stack/back of the vector
		mainVector.push_back(newItem);
		stackSize++;
	}
	void pop() { //deletes the object at the back of the vector/top of stack
		mainVector.pop_back();
		stackSize--;
	}
	int top() { // returns top of the stack
		return mainVector.at(stackSize - 1);
	}
	int average() { // returns the average of all the values of the stack 
		float total = 0.0;
		for (int i = 0; i < mainVector.size(); i++) {
			total += mainVector.at(i);
		}
		return (total / mainVector.size());
	}
	
};