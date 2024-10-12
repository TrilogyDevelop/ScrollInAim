#include <memory>
#include <mywr/mywr.hpp>

class main {
 public:
  main() {
#ifdef TRILOGYSA
    auto base_address = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
    mywr::llmo::fill(base_address + 0x10CC2F1, 0x90, 0x1F);
#else
    mywr::llmo::fill(0x60D89D, 0x90, 0x20);
#endif
  }
} main_;
