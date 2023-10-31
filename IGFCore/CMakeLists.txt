# CMakeList.txt : CMake project for IGFCore, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (IGF "src/IGFCore.cpp" "src/IGFCore.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET IGF PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
