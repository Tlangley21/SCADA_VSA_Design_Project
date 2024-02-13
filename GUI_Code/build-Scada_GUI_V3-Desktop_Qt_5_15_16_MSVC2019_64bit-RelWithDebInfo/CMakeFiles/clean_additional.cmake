# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\Scada_GUI_V3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Scada_GUI_V3_autogen.dir\\ParseCache.txt"
  "Scada_GUI_V3_autogen"
  )
endif()
