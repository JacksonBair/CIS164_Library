# CMakeList.txt : CMake project for CIS164_Library, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CIS164_Library "Main.cpp" "Main.h" "Book.cpp" "Shelf.cpp" "Book.h" "Shelf.h" "Library.h" "Library.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CIS164_Library PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
