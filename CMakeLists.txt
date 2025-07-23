cmake_minimum_required(VERSION 3.10)
project(Life_Simulator_Rebirth)

add_library(utils_lib STATIC src/utils.cpp)
target_include_directories(utils_lib PRIVATE ${PROJECT_SOURCE_DIR}/headers)

add_executable(LSR src/main.cpp)

target_include_directories(LSR PRIVATE ${PROJECT_SOURCE_DIR}/headers)
target_include_directories(LSR PRIVATE ${PROJECT_SOURCE_DIR}/src)

target_link_libraries(LSR PRIVATE utils_lib)