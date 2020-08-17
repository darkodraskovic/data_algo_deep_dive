cmake_minimum_required(VERSION 3.8)

project (boilerplate)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(Source/)

add_library(sort SHARED
  Source/Sort/Sort.cpp)

add_library(employee SHARED
  Source/Employee/Employee.cpp
  Source/Employee/EmployeeLinkedList.cpp
  Source/Employee/EmployeeNode.cpp)

# make 00_Main && ./00_Main
add_executable(00_Main Source/Samples/00_Main/Main.cpp)

# make 03_Sort_Algorithms && ./03_Sort_Algorithms
add_executable(03_Sort_Algorithms Source/Samples/03_Sort_Algorithms/Main.cpp)
target_link_libraries(03_Sort_Algorithms sort)

# make 04_Lists && ./04_Lists
add_executable(04_Lists Source/Samples/04_Lists/Main.cpp)
target_link_libraries(04_Lists employee)
