cmake_minimum_required(VERSION 3.6)
project(chunk)
message(STATUS "starting to run cmake --scj")

find_package(Boost 1.61.0 COMPONENTS system filesystem REQUIRED)
if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})

endif()

add_executable(BoostTest src/main.cpp)

if(Boost_FOUND)

    target_link_libraries(BoostTest ${Boost_LIBRARIES})

endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Hero.cpp src/Hero.h src/Enemy.cpp src/Enemy.h src/Character.h)
add_executable(chunk ${SOURCE_FILES})