#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <map>
#include <string>

class environment {
    private:
    std::map<std::string, std::string> env;
    public:
    environment();
    void insert(const std::string& symbol, const std::string& value);
};

#endif