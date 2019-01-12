#pragma once
#include <assert.h>
#include <iostream>

class TestFramework {
    std::string className;
public:
    TestFramework(std::string);
    void intro(std::string);
    std::string getClassName();
};
