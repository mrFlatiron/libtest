#include "links_static/iface.h"
#include "base/symbols.h"

namespace links_static
{
void init_library()
{
    base::init_library();
}
void* getValueAddress()
{
    return base::getValueAddress();
}
int getValue()
{
    return base::getValue();
}
void setValue(int val)
{
    return base::setValue(val);
}
}