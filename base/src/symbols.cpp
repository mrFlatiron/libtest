#include "base/symbols.h"

namespace base
{

int s_val;

void init_library()
{
    s_val += 100;
}

void* getValueAddress()
{
    return &s_val;
}

int getValue()
{
    return s_val;
}

void setValue(int val)
{
    s_val = val;
}
}