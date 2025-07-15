#include <iostream>
#include "set.h"
int main() {

    s_init(5);
    std::cout << s_isEmpty() << std::endl;
    s_put(5);
    s_put(8);
    s_put(1);
    std::cout << s_isEmpty() << std::endl;
    s_put(2);
    s_put(3);

    if(s_exists(5))
    {
        std::cout << s_get() << std::endl;
    }


    while(!s_isEmpty())
    {
       std::cout << s_get() << std::endl;
    }

    std::cout << s_isEmpty() << std::endl;


    return 0;
}
