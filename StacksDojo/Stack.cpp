#include "Stack.h"

Stack::Stack(int size)
{
    this->size = size;
}

int Stack::getSize()
{
    return size;
}

int Stack::getCurrentSize()
{
    return taken;
}

void Stack::puschToStack(int element)
{
    if (topNumber < size) {
        stack[topNumber]=element;
        topNumber++;
        taken++;
    }
    else
        std::cout << "Your stack is full!" << std::endl;
}

void Stack::popFromStack()
{   
    if (topNumber > 0) {
        stack[topNumber-1] = NULL;
        topNumber--;
        taken--;
    }

    else 
        std::cout << "Your stack is empty!" << std::endl;
}

int Stack::peekFromStack()
{
    if (topNumber < 1) {
        std::cout << "Your stack is empty" << std::endl;
    }
    else
        return stack[topNumber-1];
}

int Stack::getFreeSpacesLeft()
{
    return size - taken;
}

