add_mlir_library(TGCCodeGen
  RegisterAllocator.cpp
  TinyGPUEmitter.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}/include/kernel-scope/CodeGen

  LINK_LIBS PUBLIC
  MLIRIR
  TinyGPUDialect
)
