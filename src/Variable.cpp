#include "Variable.h"

Variable::Variable()
{
    Type = VarTypes::None;
}

Variable::Variable(int value)
{
    Type = VarTypes::Int;

    IntVal = value;
}

Variable::Variable(std::string value)
{
    Type = VarTypes::String;

    StringVal = value;
}

Variable::~Variable()
{
}

VarTypes Variable::getType()
{
    return Type;
}

int Variable::getIntVal()
{
    return IntVal;
}

std::string Variable::getStringVal()
{
    return StringVal;
}

bool Variable::getBoolVal()
{
    return BoolVal;
}