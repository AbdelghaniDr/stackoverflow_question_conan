#include <mylib/mylib.hpp>
#include <iostream>

namespace mylib {
template <typename T> void MyClass<T>::do_something() {
  std::cout << "executing the code from the library \n";
}
} // namespace mylib
