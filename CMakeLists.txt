cmake_minimum_required(VERSION 3.23)
project(10l_character_class)

set(CMAKE_CXX_STANDARD 17)

add_executable(10l_character_class main.cpp BaseClass.cpp BaseClass.hpp Mage.cpp Mage.hpp Knight.cpp Knight.hpp)
