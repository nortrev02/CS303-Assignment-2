// CS303Assignment-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Assignment2LL.cpp"
using namespace std;

int main()
{
    datapt first(5);
    SingleLinkedList mainLL(&first);
    mainLL.printLL();
    cout << "Hello World!\n";
    datapt second(9);
    mainLL.push_back(&second);
    mainLL.pop_back();
    mainLL.printLL();
}