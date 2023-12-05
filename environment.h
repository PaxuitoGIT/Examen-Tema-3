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

class environment {
    private:
    std::map<std::string, std::string> env;
    public:
    environment();
    void insert(const std::string& symbol, const std::string& value);
    Variant lookup(const std::string& symbol);
};

#endif