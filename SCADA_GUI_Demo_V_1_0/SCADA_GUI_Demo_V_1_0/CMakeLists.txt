cmake_minimum_required(VERSION 3.5)

project(SCADA_Demo_GUI VERSION 1.0.0 LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

set(PROJECT_SOURCES
    main.cpp
    MainWindow.cpp
    loginDialog.cpp
)

set(PROJECT_HEADERS
    MainWindow.h
    loginDialog.h
)

set(PROJECT_UIS
    main_window.ui
    loginDialog.ui
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS} ${PROJECT_UIS})

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets)
