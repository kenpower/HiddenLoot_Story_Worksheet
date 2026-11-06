cmake_minimum_required(VERSION 3.14)
project(HiddenLoot CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# The game code, as a library so that tests can link against it too.
add_library(vault src/vault.cpp src/vault_data.cpp src/stories.cpp)
target_include_directories(vault PUBLIC src)

add_executable(hidden_loot src/main.cpp)
target_link_libraries(hidden_loot PRIVATE vault)

# Tests are only built if a po_tests/ folder exists.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/po_tests")
    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
    )
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) # Visual Studio
    set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    file(GLOB PO_TEST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/po_tests/*.cpp")
    add_executable(po_tests ${PO_TEST_SOURCES})
    target_link_libraries(po_tests PRIVATE vault GTest::gtest_main)
endif()
