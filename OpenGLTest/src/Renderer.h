#pragma once
#include <GL/glew.h>

void GLDebugCallback(
    unsigned int source,
    unsigned int type,
    unsigned int id,
    unsigned int severity,
    int length,
    const char* message,
    const void* userParam);

void GLFWErrorCallBack(int error, const char* description);