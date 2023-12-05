#ifndef VARIANT_H
#define VARIANT_H

#include <string>
#include <variant>

class Variant {
    private:
    std::variant<int, float, std::string> value;
    public:
    Variant(int v);
    Variant(float v);
    Variant(const std::string& v);

    int getInt() const;
    float getFloat() const;
    std::string getString() const;
};

#endif