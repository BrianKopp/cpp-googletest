add_library(factorial "")

target_sources(
    factorial
    PRIVATE
        factorial.cc
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/factorial.h
    )

target_include_directories(
    factorial
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )