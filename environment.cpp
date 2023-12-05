#include "environment.h"

environment::environment() {}

void environment::insert(const std::string& symbol, const std::string& value) {
    env[symbol] = value;
}

std::string environment::lookup(const std::string& symbol) {
    if (env.find(symbol) == env.end()) {
        return env[symbol];
    }
    return env[symbol];
}