get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
get_filename_component(PARENT_DIR_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
get_filename_component(GRANDPARENT_DIR_NAME ${PARENT_DIR} NAME)

set(TARGET_NAME "${GRANDPARENT_DIR_NAME}-${PARENT_DIR_NAME}")
file(GLOB SOURCES "*.cpp")

add_executable(${TARGET_NAME}
	${SOURCES}
)

target_link_libraries(${TARGET_NAME} PUBLIC 
    Qt6::Core
    Qt6::Widgets
    propertybrowser
)
