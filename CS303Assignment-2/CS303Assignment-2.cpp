// CS303Assignment-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Assignment2LL.cpp"
using namespace std;

int main()
{
    datapt one(1);
    datapt two(2);
    datapt three(3);
    SingleLinkedList mainLL(&one);
    if (!mainLL.empty()) {
        cout << "Linked List is Not Empty!" << endl;
    }
    mainLL.push_back(&two);
    mainLL.push_front(&three);
    mainLL.printLL();
    mainLL.pop_front();
    mainLL.pop_front();
    mainLL.remove(0);
    datapt four(4);
    mainLL.insert(1, &four);
    cout << "Will return size of Linked List if value 100 isn't found: " << mainLL.find(100) << endl;
    mainLL.printLL();
    cout << endl;

    vectorStack mainStack(100000);
    if (!mainStack.isEmpty()) {
        cout << "This Stack Is Not Empty!" << endl;
    }
     mainStack.push(1);
     mainStack.push(2);
     mainStack.push(3);
     cout << "Top of the Stack: " << mainStack.top() << endl;
     mainStack.pop();
     cout << "Top of the Stack now: " << mainStack.top() << endl;
     cout << "Average count of the stack: " << mainStack.average() << endl;
}