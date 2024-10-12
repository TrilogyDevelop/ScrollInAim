cmake_minimum_required(VERSION 3.15)


add_library(${PROJECT_NAME} SHARED
    "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    mywr
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD "20"
    CXX_STANDARD_REQUIRED ON
    SUFFIX ".asi"
)