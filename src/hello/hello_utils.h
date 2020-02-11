#ifndef MYLIB_HELLO_MODULE_H
#define MYLIB_HELLO_MODULE_H
#include <boost/python.hpp>
#include <boost/python/list.hpp>
#include <boost/python/extract.hpp>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

namespace hello {

    namespace python = boost::python;

    class Greeter {
    public:
        Greeter() {}
        Greeter(char const *name, char const *msg) : _name(name), _msg(msg) {}

        std::string _name;
        std::string _msg;

        std::string get_name() const { return _name; }

        std::string get_msg() const { return _msg; }

    };

    void mainfn(void);

    char const *greet(char const *who = "");



}
#endif //MYLIB_HELLO_MODULE_H
