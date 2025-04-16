cmake_minimum_required(VERSION 3.30)
project(Inheritance)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/home/consent_/Qt/6.9.0/gcc_64/lib/cmake")

find_package(Qt6Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME} main.cpp
test.cpp
test.h)
target_link_libraries(${PROJECT_NAME} Qt6::Core)