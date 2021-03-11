cmake_minimum_required(VERSION 3.16)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(model model.cpp)

set(VTK_DIR "/home/mark/VTK-7.1.1/build")
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

# gmsh укажем явно по кусочкам (потому что он был просто распакован руками)
add_library(gmsh SHARED IMPORTED)
set_target_properties(gmsh PROPERTIES
        IMPORTED_LOCATION "/home/mark/gmsh-4.7.1-Linux64-sdk/lib/libgmsh.so"
        INTERFACE_INCLUDE_DIRECTORIES "/home/mark/gmsh-4.7.1-Linux64-sdk/include"
        )
set(GMSH_LIBRARY gmsh)


target_link_libraries(model ${VTK_LIBRARIES})
target_link_libraries(model ${GMSH_LIBRARY})
