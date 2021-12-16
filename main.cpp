#include <iostream>
#include <GLFW/glfw3.h>
#include "src/mesh.h"
#include "src/debug/log.h"

_Float32 color(0.0);

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "An Experiment", NULL, NULL);

    //test that this works on all OSes
    //window = NULL;

    if (!window) {
        glfwTerminate();
        log("GL WINDOW WAS NOT ABLE TO BE CREATED!");
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) {

        glClearColor(color,color,color,1);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}