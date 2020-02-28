#include <iostream>
#include <mylib.cpp>
#include <mylib/mylib.hpp>

namespace mylib {
template class MyClass<int>;
}

int main() {
  mylib::MyClass<int> cls;
  cls.do_something();
}
