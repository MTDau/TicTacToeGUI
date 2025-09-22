# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TicTacTow_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TicTacTow_autogen.dir\\ParseCache.txt"
  "TicTacTow_autogen"
  )
endif()
