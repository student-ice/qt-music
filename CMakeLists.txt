cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME qt-music)

project(${PROJECT_NAME} VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_definitions(-DAPP_VERSION="${PROJECT_VERSION}")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
find_package(Dtk6 REQUIRED COMPONENTS Core Gui Widget) 

add_subdirectory(src)