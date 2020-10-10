#include "VBO.h"

VBO::VBO() {
    glGenBuffers(1,&ID);
    glBindBuffer(GL_ARRAY_BUFFER,ID);
}

void VBO::use() {
    std::cout << sizeof(vertices) << std::endl;
    glBindBuffer(GL_ARRAY_BUFFER,ID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices) ,vertices,GL_STATIC_DRAW);
}

void VBO::update() {
    glBindBuffer(GL_ARRAY_BUFFER,ID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices) ,vertices,GL_STATIC_DRAW);
}

unsigned int VBO::getId() {
    return ID;
}
