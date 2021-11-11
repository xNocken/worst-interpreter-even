#include <iostream>
#include "src/VariableStack.h"
#include <vector>
#include <string>

int main()
{
    VariableStack globalVariableStack = VariableStack();

    Variable var1 = Variable(123);
    Variable var2 = Variable(123);

    std::cout << globalVariableStack.addVar("dasIsOk", &var1) << std::endl;
    std::cout << globalVariableStack.modVar("dasIsOk", &var2) << std::endl;

    Variable* string;
    globalVariableStack.getVar("dasIsOk", &string);

    switch (string->getType())
    {
    case VarTypes::String:
        std::cout << " -> " << string->getStringVal() << std::endl;
        break;

    case VarTypes::Int:
        std::cout << " -> " << string->getIntVal() << std::endl;
        break;

    case VarTypes::Bool:
        std::cout << " -> " << string->getBoolVal() << std::endl;
        break;

    default:
  	    std::cout << " -> " << string->getType() << std::endl;
        break;
    }
}
