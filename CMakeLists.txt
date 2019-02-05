cmake_minimum_required(VERSION 3.0.0)
project(sfml-hello-vi VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

set(SFML_STATIC_LIBRARIES TRUE)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(sfml-hello-vi main.cpp)

target_link_libraries(sfml-hello-vi sfml-graphics sfml-window sfml-system)
