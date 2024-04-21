cmake_minimum_required(VERSION 3.0.0)
project(application VERSION 0.1.0 LANGUAGES C CXX)
SET(CMAKE_LIBRARY_DIRECTORY ../../libs)

set(CMAKE_CXX_STANDARD 20)

file(GLOB src_fils CONFIGURE_DEPENDS src/*.cpp)
add_executable(${PROJECT_NAME} ${src_fils})
target_compile_definitions(${PROJECT_NAME} PRIVATE HZ_PLATFORM_WINDOWS)

target_link_libraries(application PRIVATE ${CMAKE_LIBRARY_DIRECTORY}/hanzel)
# Becareful that there the include dir couldn't just include/for_client, because once the Client use the 
# Hanzel.h, which includes the head files in hanzel dir, that's mean if we just include the for_client, 
# the Hanzel.h that we link to our this project will not find the hanzel/Application.h file.
# Thar's it. Easy but not easy to find.
target_include_directories(application PRIVATE ../hanzel/include)
target_include_directories(application PRIVATE ../hanzel/vendor/spdlog/include)