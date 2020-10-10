#ifndef VBO_H_INCLUDED
#define VBO_H_INCLUDED


#include "GL/glew.h" // include glew to get all the required OpenGL headers

#include <string>
#include <iostream>

class VBO {

public:
    float *vertices;
    unsigned int ID;

    VBO(); // Generate the VBO
    void use(); // Populate && bind
    void update(); //Update Data
    unsigned int getId();
};


#endif // VBO_H_INCLUDED
