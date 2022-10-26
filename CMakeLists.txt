cmake_minimum_required(VERSION 3.23)
project(Assignment_3_v2)

set(CMAKE_CXX_STANDARD 98)

add_executable(Assignment_3_v2 main.cpp source/LinkedList2D.cpp include/LinkedList2D.h
        source/Object.cpp include/Object.h source/TerrainObject.cpp include/TerrainObject.h
        source/LinkedNode2D.cpp include/LinkedNode2D.h source/RoofObject.cpp include/RoofObject.h
        source/RoomObject.cpp include/RoomObject.h source/Floor.cpp include/Floor.h source/Wall.cpp include/Wall.h
        source/CharacterObject.cpp include/CharacterObject.h source/Player.cpp include/Player.h)
