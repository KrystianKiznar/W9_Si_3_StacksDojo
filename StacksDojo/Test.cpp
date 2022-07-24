#include "Test.h"

bool Test::testPushToStack()
{
    Stack stack(10);
    stack.puschToStack(10);
    stack.puschToStack(11);

    if (stack.peekFromStack() == 11)
        return true;
    return false;
}

bool Test::testPopFromStack()
{
    Stack stack(10);

    stack.puschToStack(10);
    stack.puschToStack(11);
    stack.popFromStack();

    if (stack.peekFromStack() != 11)
        return true;
    return false;
}

bool Test::testPeekFromStack()
{
    Stack stack(10);
    stack.puschToStack(10);
    stack.puschToStack(11);

    if (stack.peekFromStack() == 11)
        return true;
    return false;
}

bool Test::testGetFreeSpacesLeft()
{
    Stack stack(10);

    stack.puschToStack(1);
    stack.puschToStack(1);
    stack.puschToStack(1);

    if (stack.getFreeSpacesLeft() == 7)
        return true;
    return false;
}

bool Test::testGetSize()
{
    Stack stack(10);

    if (stack.getSize() == 10)
        return true;
    return false;
}
