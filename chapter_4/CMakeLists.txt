cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
set(CMAKE_LEGACY_CYGWIN_WIN32 0)

project("ToDoList")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules)

enable_testing()
include(gmock)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/W4 /WX /EHsc")
endif()
if (NOT CONFIGURED_ONCE)
    set(CMAKE_CXX_FLAGS "${warnings}"
        CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set(CMAKE_C_FLAGS   "${warnings}"
        CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()


SET(SRC_DIR src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR})

add_subdirectory(${SRC_DIR}/ToDoCore)

# add a target to generate API documentation with Doxygen
#find_package(Doxygen REQUIRED)
#if(DOXYGEN_FOUND)
#  configure_file(
#    ${CMAKE_CURRENT_SOURCE_DIR}/Doxygen/Doxyfile
#    ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
#    @ONLY
#  )
#  add_custom_target(
#    doc
#    ${DOXYGEN_EXECUTABLE}
#    ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
#    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#    COMMENT "Generating API documentation with Doxygen" VERBATIM
#  )
#endif(DOXYGEN_FOUND)
add_subdirectory(${CMAKE_SOURCE_DIR}/doc)

add_executable(toDo ${SRC_DIR}/main.cc)
target_link_libraries(toDo toDoCore)

add_test(toDoTest toDo)


set(CONFIGURED_ONCE TRUE CACHE INTERNAL
    "A flag showing that CMake has configured at least once.")

