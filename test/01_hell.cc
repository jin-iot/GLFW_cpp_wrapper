#include <iostream>
#include <string>
#include <memory>

#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <GLFW/glfw3.hpp>
#include <GL/gl.hpp>
#include <glm/glm.hpp>

#define CL_TARGET_OPENCL_VERSION 120
#include <boost/compute.hpp>
namespace cpt = boost::compute;

#include "shader.hh"

int main(int argc, char** argv)
{
    if (!glfw::init()) std::cerr << "fuck" << std::endl;

    glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    glfw::window wnd(glfw::size_2d(640, 480), "fuck");
    if (!wnd.open())
    {
        std::cerr << "fucking window" << std::endl;
        return 1;
    }
    wnd.make_context_current();

    if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		getchar();
		glfw::terminate();
		return -1;
	}

    glfwSetInputMode(wnd.c_window(), GLFW_STICKY_KEYS, GL_TRUE);

	// Dark blue background
	glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

    std::cout << "gl version " << gl::version() << std::endl;

	do{
		// Clear the screen. It's not mentioned before Tutorial 02, but it can cause flickering, so it's there nonetheless.
		glClear( GL_COLOR_BUFFER_BIT );

		// Draw nothing, see you in tutorial 2 !

		
		// Swap buffers
		glfwSwapBuffers(wnd.c_window());
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(wnd.c_window(), GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   wnd.close() == 0 );

	// Close OpenGL window and terminate GLFW
	
    glfw::terminate();
    return 0;
}
