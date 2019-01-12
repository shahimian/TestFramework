#include "TestFramework.h"

TestFramework::TestFramework(std::string _className): className(_className) {}

void TestFramework::intro(std::string func){
    std::cout << className << "::" << func << " function is running..." << std::endl;
}

std::string TestFramework::getClassName(){
    return className;
}
