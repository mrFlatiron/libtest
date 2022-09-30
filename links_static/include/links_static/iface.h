#pragma once

namespace links_static
{
void init_library();
void* getValueAddress();
int getValue();
void setValue(int val);
}