cmake_minimum_required(VERSION 3.14)
project(googletestExample)

#C++17 required by GoogleTest
set(CMAKE_CXX_STANDARD 17)

#Get GoogleTest. Based on the tutorial at https://google.github.io/googletest/quickstart-cmake.html
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
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
target_link_libraries(test coin gtest gtest_main gmock_main)