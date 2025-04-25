# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appBeautiful_File_System_main_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appBeautiful_File_System_main_autogen.dir\\ParseCache.txt"
  "FluentUI\\CMakeFiles\\fluentuiplugin_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\CMakeFiles\\fluentuiplugin_autogen.dir\\ParseCache.txt"
  "FluentUI\\fluentuiplugin_autogen"
  "appBeautiful_File_System_main_autogen"
  )
endif()
