cmake_minimum_required(VERSION 3.0.0)

project(ameliaSkewT
    VERSION 0.0.1
    DESCRIPTION "A C++ skew-T and hodograph viewer"
    LANGUAGES CXX)

## add all CPP files as sources
file(GLOB SOURCES "src/AmeliaSkewT/*.cpp")

add_executable(ameliaSkewT ${SOURCES})

target_compile_features(ameliaSkewT PRIVATE cxx_std_17)

target_compile_options(ameliaSkewT PRIVATE -Wall -Wextra -Wpedantic)

target_include_directories(ameliaSkewT PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_directories(ameliaSkewT PRIVATE ${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(ameliaSkewT SHARPlib)