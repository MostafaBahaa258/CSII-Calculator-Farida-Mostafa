cmake_minimum_required(VERSION 3.10)    

project(CSII-Calculator)

set(SOURCE_FILES                       
    calculator.cpp
    test.cpp	   
)

add_executable(test  ${SOURCE_FILES})      
