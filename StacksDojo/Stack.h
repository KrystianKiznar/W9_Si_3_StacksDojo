#pragma once
#include <vector>
#include<iostream>

class Stack
{
	int size{};
	int topNumber{};
	int* stack = new int[size];
	int taken{};

public:
	Stack(int size);
	int getSize();
	int getCurrentSize();
	void puschToStack(int element);
	void popFromStack();
	int peekFromStack();
	int getFreeSpacesLeft();
};

