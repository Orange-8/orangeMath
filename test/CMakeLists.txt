cmake_minimum_required(VERSION 3.15)

# set the project name
project(test)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../src ${CMAKE_CURRENT_SOURCE_DIR}/../build/src)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)

list(APPEND EXTRA_LIBS Math)

set(SRC_LIST main.cpp)



# add the executable
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS})

target_include_directories(${PROJECT_NAME} PUBLIC
                           ${PROJECT_BINARY_DIR}
                           ../include
                           )



