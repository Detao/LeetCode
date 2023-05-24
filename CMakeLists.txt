cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0)



#Project Root
set(PRO_ROOT "${PROJECT_SOURCE_DIR}")
message("PRO_ROOT:${PRO_ROOT}")

#project include 
include_directories(${PRO_ROOT}/src/binarySearch)

file(GLOB EXAMPLE_C  "${PRO_ROOT}/simple/binarySearch/*.c")
list(SORT EXAMPLE_C)

foreach(EXAMPLE_FILE ${EXAMPLE_C})
    get_filename_component(EXAMPLE ${EXAMPLE_FILE} NAME_WE)
    message("${EXAMPLE}")
    set(SOURCE_FILES ${EXAMPLE_FILE})
    string(REPLACE "simple_" "" SRCFILE ${EXAMPLE})
    message("${SRCFILE}")
    list(APPEND SOURCE_FILES ${PRO_ROOT}/src/binarySearch/${SRCFILE}/${SRCFILE}.c)
    add_executable(${EXAMPLE} ${SOURCE_FILES} ) 
endforeach(EXAMPLE_FILE)

#project test
include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
