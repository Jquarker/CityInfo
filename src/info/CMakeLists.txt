project(info)
set(SOURCES city.cpp)
add_library(info ${SOURCES})
target_include_directories(info PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/info)

