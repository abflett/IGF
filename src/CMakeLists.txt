set(SOURCE_FILES
    IGF.cpp
)

# Determine library type based on the option
if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
else()
    add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)