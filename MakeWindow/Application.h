#pragma once
#include "include/GLFW32/glfw3-32.h"
#include "include/GLFW64/glfw3-64.h"

//IntroApp : Application {
//void startup(){printf("welcome to jurrasic world");}
struct GLFWWindow;

class Application
{
public:
	Application();
	virtual ~Application();
	void Run(const char * title, unsigned int width, unsigned int height, bool fullscreen);
	void clearscreen();
protected:
	virtual void startup() = 0;
	virtual void shutdown() = 0;
	virtual void update(float dt) = 0;
	virtual void draw() = 0;
	GLFWWindow* m_window;
	bool m_gameover;
	float m_clearColor[4];
	float m_runningTime;
};

