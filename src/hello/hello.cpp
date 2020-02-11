#include <boost/python.hpp>
#include "hello_utils.h"

BOOST_PYTHON_MODULE(hello)
{
    namespace python = boost::python;

    python::def("greet_str", &hello::greet);
    python::def("greet", &hello::mainfn);
    python::class_<hello::Greeter>("Greeter")
            .def("get_name", &hello::Greeter::get_name)
            .def("get_msg", &hello::Greeter::get_msg);

}


//int main()
//{
//    namespace python = boost::python;
//    try
//    {
//        Py_Initialize(); // Start interpreter.
//
//        // Create the __main__ module.
//        python::object main = python::import("__main__");
//        python::object main_namespace = main.attr("__dict__");
//
//        // >>> def func1(): return 100
//        main_namespace["func1"] = python::make_function(
//                []() { return 100; },
//                python::default_call_policies(),
//                boost::mpl::vector<int>());
//
//        // >>> def func2(): return 100
//        {
//            // Set __main__.__dict__ as current scope.
//            python::scope main_scope(main);
//
//            // def will define in current scope.
//            python::def("func2", python::make_function(
//                    []() { return 200; },
//                    python::default_call_policies(),
//                    boost::mpl::vector<int>())
//            );
//        }
//
//        // Execute func1 and func2 via a python string.
//        python::exec(
//                "print dir()\n"
//                "assert(100 == func1())\n"
//                "assert(200 == func2())\n"
//                , main_namespace
//        );
//    }
//    catch (const python::error_already_set&)
//    {
//        PyErr_Print();
//    }
//}