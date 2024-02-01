cmake_minimum_required(VERSION 3.21)
project(MyProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyProject main.cpp EmployeeRecordManager.cpp EmployeeRecordManager.h Employee.cpp ReportGenerator.cpp ReportGenerator.h PayrollSystem.cpp PayrollSystem.h)
