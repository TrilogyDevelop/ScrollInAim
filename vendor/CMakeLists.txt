cmake_minimum_required(VERSION 3.15)


include(FetchContent)

FetchContent_Declare(
    mywr
    GIT_REPOSITORY "https://github.com/themusaigen/mywr.git"
    GIT_TAG "v1.32.1"
)

FetchContent_MakeAvailable(mywr)