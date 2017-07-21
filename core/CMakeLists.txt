cmake_minimum_required(VERSION 3.5)
project(pathfinder-character-after-next-core)

include_directories(include)

add_library(pcan_core
    src/AbstractModifiable/get.cxx

    src/AbstractModifier/modify.cxx
    src/AbstractModifier/priority.cxx

    src/LinearModifier/constructor.cxx
    src/LinearModifier/modify.cxx

    src/StaticModifier/constructor.cxx
    src/StaticModifier/modify.cxx
    src/StaticModifier/priority.cxx
    
    src/Connector/Connector.cxx
    src/Connector/process.cxx 
    
    )

