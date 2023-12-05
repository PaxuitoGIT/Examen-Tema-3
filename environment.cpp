#include "environment.h"

environment::environment() {}

void environment::insert(const std::string& symbol, const std::string& value) {
    env[symbol] = value;
}