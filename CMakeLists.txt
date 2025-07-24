cmake_minimum_required(VERSION 3.10)
project(Life_Simulator_Rebirth)

add_library(utils_lib STATIC src/utils.cpp)
add_library(scene_lib STATIC src/openingScene.cpp)
add_library(entity_lib STATIC src/player.cpp src/items.cpp)
add_library(data_lib STATIC src/data.cpp)

target_include_directories(utils_lib PRIVATE ${PROJECT_SOURCE_DIR}/headers)
target_include_directories(scene_lib PRIVATE ${PROJECT_SOURCE_DIR}/headers)
target_include_directories(entity_lib PRIVATE ${PROJECT_SOURCE_DIR}/headers)
target_include_directories(data_lib PRIVATE ${PROJECT_SOURCE_DIR}/headers)

add_executable(LSR src/main.cpp)

target_include_directories(LSR PRIVATE ${PROJECT_SOURCE_DIR}/headers)
target_include_directories(LSR PRIVATE ${PROJECT_SOURCE_DIR}/src)

target_link_libraries(LSR PRIVATE utils_lib)
target_link_libraries(LSR PRIVATE scene_lib)
target_link_libraries(LSR PRIVATE entity_lib)
target_link_libraries(LSR PRIVATE data_lib)