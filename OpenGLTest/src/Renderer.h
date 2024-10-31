#pragma once
#include <GL/glew.h>
#include <string>

class VertexArray;
class IndexBuffer;
class Shader;

void GLDebugCallback(
    unsigned int source,
    unsigned int type,
    unsigned int id,
    unsigned int severity,
    int length,
    const char* message,
    const void* userParam);

void GLFWErrorCallBack(int error, const char* description);

class Renderer
{
public:
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
    void Clear() const;
};