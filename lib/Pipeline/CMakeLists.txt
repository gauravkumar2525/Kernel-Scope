add_mlir_library(TGCPipeline
  Pipeline.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}/include/kernel-scope/Pipeline

  LINK_LIBS PUBLIC
  MLIRIR
  TinyGPUDialect
  TGCFrontend
  TGCCodeGen
)
