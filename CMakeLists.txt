cmake_minimum_required(VERSION 3.26)
project(MyDll)

set(CMAKE_CXX_STANDARD 17)

#add_executable(MyDll
#        src/main.cpp
#        src/my_dll.cpp
#)
set(SOURCES src/main.cpp
        src/my_dll.cpp
)

add_library(MyDll SHARED
        src/my_dll.cpp
        src/main.cpp

)

