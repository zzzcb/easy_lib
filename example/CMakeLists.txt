include_directories(${CMAKE_SOURCE_DIR}/lib)

file(GLOB SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach(SUBDIR ${SUBDIRS})
    if(IS_DIRECTORY ${SUBDIR})
        add_subdirectory(${SUBDIR})
    endif()
endforeach()
