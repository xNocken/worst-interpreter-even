#include "VariableStack.h"

VariableStack::VariableStack()
{
}

VariableStack::VariableStack(VariableStack *parent)
{
    Parent = parent;
}

VariableStack::~VariableStack()
{
}

bool VariableStack::addVar(std::string var, Variable* val)
{
    Vars.insert(std::pair<std::string, Variable*>(var, val));

    return true;
}

bool VariableStack::modVar(std::string var, Variable* val)
{
    if (Vars.find(var) == Vars.end())
    {
        if (Parent != nullptr)
        {
            return Parent->modVar(var, val);
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (Vars.at(var)->getType() != val->getType()) {
            return false;
        }
        
        Vars.erase(var);
        Vars.insert(std::pair<std::string, Variable*>(var, val));

        return true;
    }
}

bool VariableStack::getVar(std::string var, Variable** outVar)
{
    if (Vars.find(var) == Vars.end())
    {
        if (Parent != nullptr)
        {
            return Parent->getVar(var, outVar);
        }
        else
        {
            return false;
        }
    }
    else
    {
        *outVar = Vars.at(var);

        return true;
    }
}
