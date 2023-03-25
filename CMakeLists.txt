cmake_minimum_required( VERSION 3.26.0 )

project( BracesBalance )

add_executable( main src/main.cpp )

target_include_directories(main PUBLIC Stack)

add_subdirectory( Stack )

target_link_libraries( main PUBLIC Stack )