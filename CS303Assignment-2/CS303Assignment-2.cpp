// CS303Assignment-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Assignment2LL.cpp"
using namespace std;

int main()
{
    datapt first(5);
    datapt second(6);
    datapt third(100891231254823327);
    SingleLinkedList mainLL(&first);
    mainLL.push_back(&second);
    mainLL.push_front(&third);
    mainLL.printLL();
    mainLL.pop_front();
    mainLL.pop_front();
    mainLL.printLL();
    cout << mainLL.find(0);
    mainLL.printLL();
}