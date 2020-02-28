cmake_minimum_required(VERSION 2.8.12)
project(PackageTest CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB MYLIB_SOURCES ${CONAN_SRC_DIRS_MYLIB}/*.cpp)

add_executable(example example.cpp ${MYLIB_SOURCES})
target_link_libraries(example ${CONAN_LIBS})
target_include_directories(example PRIVATE ${CONAN_INCLUDE_DIRS} ${CONAN_SRC_DIRS_MYLIB})

# CTest is a testing tool that can be used to test your project.
# enable_testing()
# add_test(NAME example
#          WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
#          COMMAND example)
