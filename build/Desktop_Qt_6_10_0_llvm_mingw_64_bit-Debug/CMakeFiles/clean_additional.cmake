# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SimpleNotepad_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SimpleNotepad_autogen.dir\\ParseCache.txt"
  "SimpleNotepad_autogen"
  )
endif()
