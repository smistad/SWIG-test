cmake_minimum_required(VERSION 2.8)
project(SWIG-test)

find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_PATH})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_SWIG_FLAGS "")

set(SOURCE_FILES 
	ObjectA.cpp
	ObjectA.hpp
	ObjectB.cpp
	ObjectB.hpp
)

set_source_files_properties(python.i PROPERTIES CPLUSPLUS ON)
#set_source_files_properties(python.i PROPERTIES SWIG_FLAGS "-includeall") # Should avoid this flag
swig_add_module(test python python.i ${SOURCE_FILES})
swig_link_libraries(test ${PYTHON_LIBRARIES})