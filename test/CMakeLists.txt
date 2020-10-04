add_library(shader_lib STATIC shader.cc)

set(DEPS ${CONAN_LIBS} OpenCL OpenGL EGL shader_lib)

add_executable(01_hell 01_hell.cc)
set_property(TARGET 01_hell PROPERTY CXX_STANDARD 17)
target_link_libraries(01_hell ${DEPS})

add_executable(02_triangle 02_triangle.cc)
set_property(TARGET 02_triangle PROPERTY CXX_STANDARD 17)
target_link_libraries(02_triangle ${DEPS})
