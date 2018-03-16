cmake_minimum_required(VERSION 2.8)
#add_definitions(-D_DEBUG -DSTATIC_QRT -DSCRIPT_BINDK)
#add_definitions(-pipe  -Wall -fPIC -Wno-unknown-pragmas -Wno-unused -Wno-reorder -O0 -fexceptions -g -fstack-protector  -D_DEBUG -DSTATIC_QRT -DSCRIPT_BINDK -ggdb)
add_definitions(-g -O2 -Wall -fPIC)
#include_directories(. ../../Include ../../Include/Core ../../Include/Misc ../../Include/Network ../../Include/Protocol ../../Runtime /data/game/yl/DevEnv/Include/lua5.1.4)
include_directories(. include)

link_directories(/usr/lib64)

#aux_source_directory(. CUR_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Crypto CRYPTO_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Lua  LUA_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Network NETWORK_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Runtime RUNTIME_SRCS)
#aux_source_directory(${core_BINARY_DIR}/File FILE_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Misc MISC_SRCS)
#aux_source_directory(${core_BINARY_DIR}/Misc/xml MISC_XML_SRCS)

file(GLOB_RECURSE CORE_SRCS  "${CMAKE_CURRENT_SOURCE_DIR}/srcs/*.c")


ADD_LIBRARY(toolbox SHARED ${CORE_SRCS})
target_link_libraries(toolbox pthread)
