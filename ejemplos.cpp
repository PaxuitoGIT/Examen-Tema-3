#include <iostream>
#include "Environment.h"
#include "Variant.h"
int main() {
    Environment env;
    Variant v1(10); // int
    Variant v2(3.14f); // float
    Variant v3("hello"); // string

    env.insert("i", v1);
    env.insert("f", v2);
    env.insert("s", v3);

    std::cout << env.lookup("i").getInt() << std::endl;
    std::cout << env.lookup("f").getFloat() << std::endl;
    std::cout << env.lookup("s").getString() << std::endl;

    return 0;
}