PYTHON_ADD_MODULE(hello hello.cpp hello_utils.cpp hello_utils.h)
target_link_libraries(hello Boost::python36 ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
