# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CardGames")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "C:\\Libraries\\SFML-2.6.0VC")
find_package(SFML 2.6 COMPONENTS system graphics window REQUIRED)

add_subdirectory ("src")

cmake_policy(SET CMP0079 NEW)
target_include_directories(CardGames PRIVATE "C:\\Libraries\\SFML-2.6.0VC\\include")
target_link_libraries( CardGames PRIVATE
                    sfml-system
                    sfml-window
                    sfml-graphics)