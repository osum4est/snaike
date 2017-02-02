cmake_minimum_required(VERSION 3.6)
project(snaike)

set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES
        src/main.cpp
        src/snake/snake.cpp src/snake/snake.h
        src/snake/snake_game.cpp src/snake/snake_game.h src/utils/color.cpp src/utils/color.h src/utils/drawing.cpp src/utils/drawing.h src/snake/game_object.cpp src/snake/game_object.h src/utils/direction.h src/utils/input.cpp src/utils/input.h src/utils/utils.cpp src/utils/utils.h)
add_executable(snaike ${SOURCE_FILES})


set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(lib/glad-0.1.13a0)
add_subdirectory(lib/glfw-3.2.1)

target_link_libraries(snaike glad ${GLAD_LIBRARIES})
target_link_libraries(snaike glfw ${GLFW_LIBRARIES})

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})
target_link_libraries(snaike ${OPENGL_gl_LIBRARY})