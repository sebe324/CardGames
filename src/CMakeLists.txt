# CMakeList.txt : CMake project for karty, include source and define
# project specific logic here.
#

# Add source to this project's executable.
file(GLOB SOURCES CONFIGURE_DEPENDS "*.cpp" "*.h")
add_executable (CardGames ${SOURCES})
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CardGames PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
