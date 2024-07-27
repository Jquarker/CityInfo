project(putsys)
set(SOURCES putsys.cpp)
add_library(putsys ${SOURCES})
target_include_directories(putsys PUBLIC ${CMAKE_SOURCE_DIR}/src/putsys)