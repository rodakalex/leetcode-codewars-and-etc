cmake_minimum_required(VERSION 3.24)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp Solution.cpp)

#Add the google test subdirectory
add_subdirectory("googletest")

#include googletest/include dir
include_directories(googletest/googletest/include)

#include the googlemock/include dir
include_directories(googletest/googlemock/include)

##Define your executable
#add_executable(EXECUTABLE_NAME ${SOURCE_FILES})

#Link with GoogleTest
target_link_libraries(leetcode gtest gtest_main)

#Link with GoogleMock
target_link_libraries(leetcode gmock gmock_main)