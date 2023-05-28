cmake_minimum_required(VERSION 3.20)
project(BitMagicProject)

# Add the include directory
include_directories(include)

# Set C standard
set(CMAKE_C_STANDARD 11)

# Enable compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add the source files
set(SOURCES
    src/bitmagic.c
    examples/example1.c
)

# Create the executable
add_executable(BitMagic ${SOURCES})
