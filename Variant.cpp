#include "Variant.h"
#include <stdexcept>

Variant::Variant(int v) : value(v) {}
Variant::Variant(float v) : value(v) {}
Variant::Variant(const string& v) : value(v) {}