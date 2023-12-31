#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <map>
#include <string>
#include <exception>
#include "Variant.h"

class SymbolNotFound : public std::exception {
    public:
    virtual const char* what() const throw() {
        return "Simbolo no encontrado";
    }
};

class SymbolAlreadyExists : public std::exception {
    public:
    virtual const char* what() const throw() {
        return "Simbolo ya existe";
    }
};

class Environment {
    private:
    std::map<std::string, std::string> env;
    public:
    Environment();
    void insert(const std::string& symbol, const Variant& value);
    Variant lookup(const std::string& symbol);
    void remove(const std::string& symbol);
    bool exists(const std::string& symbol);
};

#endif