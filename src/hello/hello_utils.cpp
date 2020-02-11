# include "hello_utils.h"

void hello::mainfn(void)
{
    std::cout << "This is the hello module\n It doesn't do much. Just says hello!!"
              << std::endl;
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