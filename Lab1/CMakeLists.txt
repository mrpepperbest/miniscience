cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_FLAGS "-std=c++11 -g")

project(Lab1)

add_executable(torus torus.cpp)
add_executable(model model.cpp)

add_library(gmsh SHARED IMPORTED)
set_target_properties(gmsh PROPERTIES
        IMPORTED_LOCATION "/home/mark/gmsh-4.7.1-Linux64-sdk/lib/libgmsh.so"
        INTERFACE_INCLUDE_DIRECTORIES "/home/mark/gmsh-4.7.1-Linux64-sdk/include"
        )
set(GMSH_LIBRARY gmsh)

# Укажем библиотеки для линковки
target_link_libraries(torus ${GMSH_LIBRARY})
target_link_libraries(model ${GMSH_LIBRARY})
