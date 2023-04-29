add_library(Math orangeMath.c)

target_include_directories(Math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include
          )

