#pragma once

#include <ia32.hpp>

namespace hv {

// structure that gets filled out when a host exception occurs
struct host_exception_info {
  // whether an exception occurred or not
  bool exception_occurred;

  // interrupt vector
  uint64_t vector;

  // error code
  uint64_t error;
};

// memcpy with exception handling
void memcpy_safe(host_exception_info& e, void* dst, void const* src, size_t size);

} // namespace hv

