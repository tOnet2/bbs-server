cmake_minimum_required(VERSION 3.0)

project(Client)

set(SRC
	src/client.c
)

set(HEADERS
	headers/client.h
	headers/typedefs.h
)

add_executable (exe ${SRC} ${HEADERS})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g -ansi -pedantic")
