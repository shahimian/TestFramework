#include "Exception.h"

class __declspec(dllexport) TestFramework: public Exception {
    std::string className;
public:
    TestFramework(std::string);
    void intro(std::string);
    std::string getClassName();
};
