cmake_minimum_required(VERSION 3.8)
project (boilerplate)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(employee SHARED
  Source/Employee/Employee.cpp
  Source/Employee/EmployeeLinkedList.cpp
  Source/Employee/EmployeeNode.cpp)
target_include_directories(employee PUBLIC Source/Employee)

add_executable(main Source/Main.cpp)
target_link_libraries(main employee)
