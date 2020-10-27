set(unit_test_source
        demo_test.cpp
        simple_test.cpp
        main.cpp)
    
add_executable(unit_test ${unit_test_source})
target_link_libraries(unit_test gtest demo)
target_include_directories(unit_test PRIVATE ${CMAKE_SOURCE_DIR}/src)
