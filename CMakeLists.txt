cmake_minimum_required(VERSION 3.0.0)
project(practice VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(. DIR_SRCS)
add_subdirectory(src)

add_executable(practice main.cpp)

target_link_libraries(practice MathFunc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
