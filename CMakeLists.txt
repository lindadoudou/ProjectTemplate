PROJECT(unit_test_doc C CXX)
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

set(CMAKE_PROJECT_VERSION_MAJOR 0)
set(CMAKE_PROJECT_VERSION_MINOR 0)
set(CMAKE_PROJECT_VERSION_PATCH 0)

set(CMAKE_PROJECT_VERSION v${CMAKE_PROJECT_VERSION_MAJOR}.${CMAKE_PROJECT_VERSION_MINOR}.${CMAKE_PROJECT_VERSION_PATCH})

option(BUILD_TEST "Build Unit Test, default: ON" ON)
option(BUILD_DOC "Build doc by doxygen" OFF)

# CMake Utils
set (CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_SOURCE_DIR}/cmake")

include(ExternalModules)

add_subdirectory(${CMAKE_SOURCE_DIR}/src)

if(BUILD_TEST)
    add_subdirectory(${CMAKE_SOURCE_DIR}/test)
endif()

if (BUILD_DOC)
    message("-- Build Doc...")
    option(NO_PDF "Generate Latex PDF" ON)
    set(PROJECT_NAME "Project Name")
    set(PROJECT_NUMBER "${CMAKE_PROJECT_VERSION}")
    set(PROJECT_BRIEF "xxxx")
    set(EXAMPLE_PATH "${CMAKE_SOURCE_DIR}/test")
    include(DoxygenTargets)
    add_doxygen(${CMAKE_SOURCE_DIR}/cmake/doxygen.conf)
endif ()
