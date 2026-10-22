add_mlir_library(TGCFrontend
  Lexer.cpp
  Parser.cpp
  MLIRGen.cpp

  ADDITIONAL_HEADER_DIRS
  ${PROJECT_SOURCE_DIR}/include/kernel-scope/Frontend

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRArithDialect
  MLIRFuncDialect
  MLIRMemRefDialect
  MLIRSCFDialect
  TinyGPUDialect
)
