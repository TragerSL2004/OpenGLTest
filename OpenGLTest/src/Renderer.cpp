#include "Renderer.h"
#include <iostream>

void GLDebugCallback(
    unsigned int source,
    unsigned int type,
    unsigned int id,
    unsigned int severity,
    int length,
    const char* message,
    const void* userParam)
{
    std::cout << "[OpenGL]" << message << "\n";
    if (severity == GL_DEBUG_SEVERITY_HIGH)
        __debugbreak();
}

void GLFWErrorCallBack(int error, const char* description)
{
    std::cerr << description << "\n";
}