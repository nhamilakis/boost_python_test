# include "hello_utils.h"

void hello::mainfn(void)
{
    std::cout << "Hello Human, this is the greet module! It greets you." << std::endl;
}

char const* hello::greet(char const *who)
{
    std::stringstream ss;
    ss << "Hello ";
    if(strlen(who) <= 0)
    {
        ss << "Human !!!!";
    }
    else
    {
        ss << who << " !!!";
    }
    return ss.str().c_str();
}