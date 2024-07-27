add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/info)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/putsys)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/main)

include_directories(${CMAKE_SOURCE_DIR}/src/info)
include_directories(${CMAKE_SOURCE_DIR}/src/putsys)
include_directories(${CMAKE_SOURCE_DIR}/src/main)