# CMakeList.txt : CMake project for CIS164_Library, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CIS164_Library "CIS164_Library.cpp" "CIS164_Library.h" "Book.cpp" "Shelf.cpp" "Book.h" "Shelf.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CIS164_Library PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
