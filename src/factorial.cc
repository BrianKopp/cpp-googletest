#include "factorial.h"

int calculate_factorial(const int i)
{
    int value = 1;
    int which = i;
    
    while (which > 1)
    {
        value *= which;
        which--;
    }

    return value;
}