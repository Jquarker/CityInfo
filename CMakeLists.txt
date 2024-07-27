cmake_minimum_required(VERSION 3.12)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

project(CityInfo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_LIBDIR ${ROOT_PATH}/build/install/lib)
set(CMAKE_INSTALL_BINDIR ${ROOT_PATH}/build/install/bin)
set(CMAKE_INSTALL_INCLUDEDIR ${ROOT_PATH}/build/install/include)

add_subdirectory(${ROOT_PATH}/src)

target_include_directories(putsys PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/src/info)

include_directories(${CMAKE_SOURCE_DIR}/src/info)
include_directories(${CMAKE_SOURCE_DIR}/src/putsys)
include_directories(${CMAKE_SOURCE_DIR}/src/main)