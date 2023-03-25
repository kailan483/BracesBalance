cmake_minimum_required( VERSION 3.26.0 )

project( Stack )

set (SOURCES src/Stack.cpp)
set (HEADERS h/Stack.h)

add_library( Stack ${SOURCES} ${HEADERS} )

target_include_directories( Stack PUBLIC h )
