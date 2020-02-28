
set(MY_LIB_INCLUDE_DIR ${${This}_ROOT_DIR}/include)
set(HEADERS ${MY_LIB_INCLUDE_DIR}/mylib/mylib.hpp)
set(SOURCES mylib.cpp)

add_library(${This} ${HEADERS} ${SOURCES})
target_include_directories(${This} PUBLIC ${MY_LIB_INCLUDE_DIR})