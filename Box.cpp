#include <iostream>
#include "Box.h"

// TEST
Box::Box(void)
{
    std::cout << "Object is being created" << std::endl;
}

int Box::put (int item)
{
    space[sp] = item;
    space[++sp] = 0;
    return 1;
}

int Box::take ()
{
    return space[--sp];
}

int Box::clean ()
{
    sp = 0;
    return 1;
}





