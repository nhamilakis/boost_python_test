cmake_minimum_required(VERSION 3.15)
project(mylib)
set(CMAKE_CXX_STANDARD 17)

message(STATUS "start running cmake...")

# Python
find_package(PythonInterp 3)
find_package(PythonLibs 3)
find_package(Boost 1.65.0 REQUIRED COMPONENTS python36 )

if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    # include
    include_directories(${Boost_INCLUDE_DIRS})

    if (PYTHONINTERP_FOUND)
        if (PYTHON_VERSION_MAJOR EQUAL 3)
            find_package(Boost COMPONENTS python${PYTHON_VERSION_SUFFIX})
            find_package(PythonInterp 3)
            find_package(PythonLibs 3 REQUIRED)
        else()
            find_package(Boost COMPONENTS python)
            find_package(PythonInterp)
            find_package(PythonLibs REQUIRED)
        endif()

        message(STATUS "PYTHON_LIBRARIES = ${PYTHON_LIBRARIES}")
        message(STATUS "PYTHON_EXECUTABLE = ${PYTHON_EXECUTABLE}")
        message(STATUS "PYTHON_INCLUDE_DIRS = ${PYTHON_INCLUDE_DIRS}")
        message(STATUS "Boost_LIBRARIES = ${Boost_LIBRARIES}")
        # include
        include_directories(${PYTHON_INCLUDE_DIRS})
    else()
        message("Python 3 not found !!")
    endif()
else()
    message("BOOST not found")
endif()

ADD_SUBDIRECTORY(src/hello)
