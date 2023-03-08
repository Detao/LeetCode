cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(./src)

add_executable(shipwithindays ./src/shipWithInDays.c ./simple/simpleShipWithInDays.c)
add_executable(minEatingSpeed ./src/minEatingSpeed.c ./simple/simpleMinEatingSpeed.c)
add_executable(peakIndexInMountainArray ./src/peakIndexInmountainArray.c ./simple/simplePeakIndexInMountainArray.c) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
