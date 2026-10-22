#include "kernel-scope/Dialect/TinyGPU/TinyGPUDialect.h"
#include "kernel-scope/Dialect/TinyGPU/TinyGPUOps.h"

using namespace mlir;
using namespace mlir::tinygpu;

#include "kernel-scope/Dialect/TinyGPU/TinyGPUDialect.cpp.inc"

void TinyGPUDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "kernel-scope/Dialect/TinyGPU/TinyGPUOps.cpp.inc"
      >();
}
