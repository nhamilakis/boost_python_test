#include <boost/python.hpp>
#include "hello_utils.h"

BOOST_PYTHON_MODULE(hello)
{
    namespace python = boost::python;

    python::def("greet_str", &hello::greet);
    python::def("greet", &hello::mainfn);
    python::class_<hello::Greeter>("Greeter", python::init<char const*, char const *>())
            .def("get_name", &hello::Greeter::get_name)
            .def("set_name", &hello::Greeter::set_name)
            .def("get_msg", &hello::Greeter::get_msg)
            .def("set_msg", &hello::Greeter::set_msg)
            .def("greet", &hello::Greeter::greet);

}
