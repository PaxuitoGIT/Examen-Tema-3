#ifndef VARIANT_H
#define VARIANT_H

#include <string>
#include <variant>
using namespace std;

class Variant {
    private:
    Variant<int, float, string> value;
    public:
    Variant(int v);
    Variant(float v);
    Variant(const string& v);

    int getInt() const;
    float getFloat() const;
    string getString() const;
};

#endif