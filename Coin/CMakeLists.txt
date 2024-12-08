add_library(coin Coin.cpp Coin.h)
target_include_directories(coin PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(coin randomgenerator)