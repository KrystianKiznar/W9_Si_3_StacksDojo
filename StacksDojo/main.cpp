#include<iostream>
#include <vector>
#include "Stack.h"
#include "Test.h"

int main() {
	int s = 10;
	Stack v(s);

	v.puschToStack(1);
	v.puschToStack(2);
	v.puschToStack(3);

	for (size_t i = 0; i <= 2; i++)
	{
		std::cout << v.peekFromStack() << std::endl;
		v.popFromStack();
	}

	v.puschToStack(1);
	v.puschToStack(2);
	v.puschToStack(3);

	std::cout << "First element on the stack is: " << v.peekFromStack()<<std::endl;
	std::cout << "Max capacity: " << v.getSize() << std::endl;
	std::cout << "The number of free spaces left: " << v.getFreeSpacesLeft() << std::endl;

	Test t;
	std::cout << "Test pushToStack method: " << t.testPushToStack() << std::endl;
	std::cout << "Test popFromStack method: " << t.testPopFromStack() << std::endl;
	std::cout << "Test peekFromStack method: " << t.testPeekFromStack() << std::endl;
	std::cout << "Test getFreeSpacesLeft method: " << t.testGetFreeSpacesLeft() << std::endl;//??
	std::cout << "Test getSize method: " << t.testGetSize() << std::endl;//??
	return 0;
}