cmake_minimum_required(VERSION 3.24)
project(Librairy C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_library(my
        include/library.h
        src/len.c
        src/realloc.c
        src/strcat.c
        src/strcmp.c
        src/strdup.c)

link_libraries(criterion)

add_link_options(--coverage)

add_executable(unit_tests
        src/len.c
        src/realloc.c
        src/strcat.c
        src/strcmp.c
        src/strdup.c
        tests/test.c)