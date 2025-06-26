cmake_minimum_required(VERSION 3.28.3)  
project(CS2LabHomeAssignment)

# List all source files
set(SOURCES main.cpp text_utility_jana.cpp text_utility_youssef.cpp)  # Define a variable for sources

# Add executable
add_executable(my_program ${SOURCES})
