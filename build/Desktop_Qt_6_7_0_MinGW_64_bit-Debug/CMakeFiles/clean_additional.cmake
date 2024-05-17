# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Flappy-Bird_QT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Flappy-Bird_QT_autogen.dir\\ParseCache.txt"
  "Flappy-Bird_QT_autogen"
  )
endif()
