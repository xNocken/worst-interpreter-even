#include <map>
#include <string>
#include "Variable.h"

class VariableStack
{
private:
    VariableStack* Parent;
    std::map<std::string, Variable*> Vars;
public:
    VariableStack();
    VariableStack(VariableStack* parent);
    ~VariableStack();

    bool addVar(std::string var, Variable* val);
    bool modVar(std::string var, Variable* val);
    bool getVar(std::string var, Variable** outVar);
};
