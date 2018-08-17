#include <iostream>
#include "Application.h"
#include "include/GLFW64/glfw3-64.h"
#include "include/GLFW32/glfw3-32.h"
#include "gl_core_4_4.h"
//All the Start() items will be in here

void Application::startup()
{

}

Application::Application():m_window(nullptr), m_gameover(false), m_clearColor{1, 1, 1, 1}, m_runningTime(0)
{

}

void Application::Run(const char * title, unsigned int width, unsigned int height, bool fullscreen)
{
	glfwInit(); //initialize glfw	
	m_window = glfwCreateWindow(1600, 900, "Unity4D", nullptr, nullptr);//make window
	glfwMakeContextCurrent(m_window);//make the current window our opengl target
	auto success = ogl_LoadFunctions();//initializes openGL

	auto major = ogl_GetMajorVersion();
	auto minor = ogl_GetMinorVersion();
	std::printf("major:: %i.%i", major, minor);

	glClearColor(.8f, .8f, 0.8f, 1);//sets the clear color for the window
	glEnable(GL_DEPTH_TEST); // enables the depth buffer 

	Gizmos::create();//initialize gizmos class
	return 0;
}

Application::~Application()
{
}
