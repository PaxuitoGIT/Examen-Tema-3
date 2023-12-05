#include "Variant.h"
#include <stdexcept>

Variant::Variant(int v) : value(v) {}
Variant::Variant(float v) : value(v) {}
Variant::Variant(const string& v) : value(v) {}

int Variant::getInt() const {
    if (std::holds_alternative<int>(value)) {
        return std::get<int>(value);
    }
    throw std::runtime_error("No es un entero");
}
