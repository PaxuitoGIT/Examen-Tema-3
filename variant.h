#ifndef VARIANT_H
#define VARIANT_H

#include <string>
#include <variant>

class variant {
    private:
    std::Variant<std::string, int, float, bool> value;
    public:
    Variant(std::string value);
    Variant(int value);
    Variant(float value);
    Variant(bool value);
    std::string get_string();
    int get_int();
    float get_float();
    bool get_bool();
};

#endif