cmake_minimum_required(VERSION 3.0)
project(googletestExample)

#C++14 required by GoogleTest
set(CMAKE_CXX_STANDARD 14)

#Get GoogleTest. Based on the tutorial at https://google.github.io/googletest/quickstart-cmake.html
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(RandomGenerator)
add_subdirectory(Coin)
add_executable(app main.cpp)
target_include_directories(app PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(app coin)

add_executable(test test.cpp)
target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(test gtest gtest_main)