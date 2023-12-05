#include "Environment.h"

Environment::Environment() {}

void Environment::insert(const std::string& symbol, const std::string& value) {
    if (env.find(symbol) == env.end()) {
        throw SymbolAlreadyExists();
    }
    env[symbol] = value;
}

Variant Environment::lookup(const std::string& symbol) {
    if (env.find(symbol) == env.end()) {
        throw std::runtime_error("Simbolo no encontrado");
    }
    return env[symbol];
}