#include <string>

enum VarTypes
{
    None,
    Int,
    String,
    Bool,
};

class Variable
{
private:
    int IntVal;
    std::string StringVal;
    bool BoolVal;
    VarTypes Type;

public:
    Variable();
    Variable(int value);
    Variable(std::string value);
    ~Variable();

    int getIntVal();
    std::string getStringVal();
    bool getBoolVal();

    VarTypes getType();
};
