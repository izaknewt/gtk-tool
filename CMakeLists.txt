cmake_minimum_required(VERSION 3.17)
project(gtk_tool C)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

set(CMAKE_C_STANDARD 99)

add_executable(gtk_tool main.c)
target_link_libraries(gtk_tool ${GTK3_LIBRARIES})
target_include_directories(gtk_tool PUBLIC ${GTK3_INCLUDE_DIRS})