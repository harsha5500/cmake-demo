cmake_minimum_required(VERSION 3.20)

# Setting the prject name
set(PROJECT_NAME cmake-demo)
project(${PROJECT_NAME} C)

# Set the sandard for the language
set(CMAKE_C_STANDARD 11)

# cmake uses our find modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

#set(CMAKE_OSX_ARCHITECTURES "arm64")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS}) 
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})



# find_library(SDL2_LIBRARY NAME SDL2)
# message ([STATUS] "SDL2_INCLUDE_DIR >> " ${SDL2_INCLUDE_DIRS})
# message ([STATUS] "SDL2_LIBRARY >> " ${SDL2_LIBRARIES})
include_directories(includes)
file(GLOB SOURCES src/*.c)

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCES})
# include_directories(${PROJECT_NAME} ${SDL2_INCLUDE_DIRS})
include_directories(${PROJECT_NAME} ${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})
