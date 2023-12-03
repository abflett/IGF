set(SOURCE_FILES
    IGF.cpp
)

set(BUILD_SHARED_LIBS OFF)

add_library(core STATIC ${SOURCE_FILES})
target_include_directories(core PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(core PRIVATE SDL3::SDL3)