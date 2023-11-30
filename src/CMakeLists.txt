set(SOURCE_FILES
    IGF.cpp
)

add_library(someLib ${SOURCE_FILES})

target_link_libraries(someLib PRIVATE external)

target_include_directories(someLib
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)