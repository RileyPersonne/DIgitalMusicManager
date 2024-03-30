# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DMM_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DMM_autogen.dir/ParseCache.txt"
  "DMM_autogen"
  )
endif()
