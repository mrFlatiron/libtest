#include <iostream>
#include "base/symbols.h"
#include "links_shared/iface.h"
#include "links_static/iface.h"

int main()
{
    std::cout << "1:\n";
    std::cout << base::getValue() << "\n"; // 0
    std::cout << base::getValueAddress() << "\n"; // a
    std::cout << links_shared::getValue() << "\n"; // 0
    std::cout << links_shared::getValueAddress() << "\n"; // a
    std::cout << links_static::getValue() << "\n"; // 0
    std::cout << links_static::getValueAddress() << "\n"; // b

    std::cout << "2:\n";
    base::init_library();
    std::cout << base::getValue() << "\n"; // 100
    std::cout << base::getValueAddress() << "\n"; // a
    links_shared::init_library();
    std::cout << links_shared::getValue() << "\n"; // 100
    std::cout << links_shared::getValueAddress() << "\n"; // c
    links_static::init_library();
    std::cout << links_static::getValue() << "\n"; // 100
    std::cout << links_static::getValueAddress() << "\n"; // b

    return 0;
}