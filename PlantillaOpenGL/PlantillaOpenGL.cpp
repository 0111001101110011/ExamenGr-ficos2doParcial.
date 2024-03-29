// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"
#include "Modelo.h"

using namespace std;

Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *cuadrado;
Modelo *cuadrado1;
Modelo *cuadrado2;
Modelo *cuadrado3;
Modelo *cuadrado4;
Modelo *cuadrado5;
Modelo *cuadrado6;
Modelo *cuadrado7;
Modelo *cuadrado8;
Modelo *cuadrado9;
Modelo *cuadrado10;
Modelo *cuadrado11;
Modelo *cuadrado12;
Modelo *cuadrado13;
Modelo *cuadrado14;

void  Cuadrado() {
	cuadrado = new Modelo();
	Vertice v1 = {
		vec3(-0.4,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.1,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.1,-0.95,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.4,-0.95,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado->vertices.push_back(v1);
	cuadrado->vertices.push_back(v2);
	cuadrado->vertices.push_back(v3);
	cuadrado->vertices.push_back(v4);

}

void  Cuadrado1() {
	cuadrado1 = new Modelo();
	Vertice v1 = {
		vec3(-0.4,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.5,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.5,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.4,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado1->vertices.push_back(v1);
	cuadrado1->vertices.push_back(v2);
	cuadrado1->vertices.push_back(v3);
	cuadrado1->vertices.push_back(v4);
}

void  Cuadrado2() {
	cuadrado2 = new Modelo();
	Vertice v1 = {
		vec3(-0.5,-0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.6,-0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.6,0.4,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.5,0.4,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado2->vertices.push_back(v1);
	cuadrado2->vertices.push_back(v2);
	cuadrado2->vertices.push_back(v3);
	cuadrado2->vertices.push_back(v4);
}

void  Cuadrado3() {
	cuadrado3 = new Modelo();
	Vertice v1 = {
		vec3(-0.6,0.0,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.7,0.0,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.7,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.6,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado3->vertices.push_back(v1);
	cuadrado3->vertices.push_back(v2);
	cuadrado3->vertices.push_back(v3);
	cuadrado3->vertices.push_back(v4);
}

void  Cuadrado4() {
	cuadrado4 = new Modelo();
	Vertice v1 = {
		vec3(0.4,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.1,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.1,-0.95,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.4,-0.95,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado4->vertices.push_back(v1);
	cuadrado4->vertices.push_back(v2);
	cuadrado4->vertices.push_back(v3);
	cuadrado4->vertices.push_back(v4);

}

void  Cuadrado5() {
	cuadrado5 = new Modelo();
	Vertice v1 = {
		vec3(0.4,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.5,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.5,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.4,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado5->vertices.push_back(v1);
	cuadrado5->vertices.push_back(v2);
	cuadrado5->vertices.push_back(v3);
	cuadrado5->vertices.push_back(v4);
}

void  Cuadrado6() {
	cuadrado6 = new Modelo();
	Vertice v1 = {
		vec3(0.5,-0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.6,-0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.6,0.4,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.5,0.4,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado6->vertices.push_back(v1);
	cuadrado6->vertices.push_back(v2);
	cuadrado6->vertices.push_back(v3);
	cuadrado6->vertices.push_back(v4);
}

void  Cuadrado7() {
	cuadrado7 = new Modelo();
	Vertice v1 = {
		vec3(0.6,0.0,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.7,0.0,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.7,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.6,-0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado7->vertices.push_back(v1);
	cuadrado7->vertices.push_back(v2);
	cuadrado7->vertices.push_back(v3);
	cuadrado7->vertices.push_back(v4);
}

void  Cuadrado8() {
	cuadrado8 = new Modelo();
	Vertice v1 = {
		vec3(-0.4,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.4,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.4,-0.65,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.4,-0.65,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado8->vertices.push_back(v1);
	cuadrado8->vertices.push_back(v2);
	cuadrado8->vertices.push_back(v3);
	cuadrado8->vertices.push_back(v4);
}

void  Cuadrado9() {
	cuadrado9 = new Modelo();
	Vertice v1 = {
		vec3(-0.3,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.2,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.2,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.3,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado9->vertices.push_back(v1);
	cuadrado9->vertices.push_back(v2);
	cuadrado9->vertices.push_back(v3);
	cuadrado9->vertices.push_back(v4);
}

void  Cuadrado10() {
	cuadrado10 = new Modelo();
	Vertice v1 = {
		vec3(-0.4,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(-0.3,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(-0.3,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(-0.4,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado10->vertices.push_back(v1);
	cuadrado10->vertices.push_back(v2);
	cuadrado10->vertices.push_back(v3);
	cuadrado10->vertices.push_back(v4);
}

void  Cuadrado11() {
	cuadrado11 = new Modelo();
	Vertice v1 = {
		vec3(0.3,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.2,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.2,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.3,0.6,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado11->vertices.push_back(v1);
	cuadrado11->vertices.push_back(v2);
	cuadrado11->vertices.push_back(v3);
	cuadrado11->vertices.push_back(v4);
}

void  Cuadrado12() {
	cuadrado12 = new Modelo();
	Vertice v1 = {
		vec3(0.4,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v2 = {
		vec3(0.3,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v3 = {
		vec3(0.3,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	Vertice v4 = {
		vec3(0.4,0.7,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};
	cuadrado12->vertices.push_back(v1);
	cuadrado12->vertices.push_back(v2);
	cuadrado12->vertices.push_back(v3);
	cuadrado12->vertices.push_back(v4);
}

void  Cuadrado13() {
	cuadrado13 = new Modelo();
	Vertice v1 = {
		vec3(-0.2,0.3,0.0),
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v2 = {
		vec3(-0.2,0.4,0.0),
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v3 = {
		vec3(-0.1,0.4,0.0), 
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v4 = {
		vec3(-0.1,0.3,0.0), 
		vec4(0.0,0.0,0.0,0.0)
	};
	cuadrado13->vertices.push_back(v1);
	cuadrado13->vertices.push_back(v2);
	cuadrado13->vertices.push_back(v3);
	cuadrado13->vertices.push_back(v4);
}

void  Cuadrado14() {
	cuadrado14 = new Modelo();
	Vertice v1 = {
		vec3(0.2,0.3,0.0), 
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v2 = {
		vec3(0.2,0.4,0.0),
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v3 = {
		vec3(0.1,0.4,0.0), 
		vec4(0.0,0.0,0.0,0.0)
	};
	Vertice v4 = {
		vec3(0.1,0.3,0.0), 
		vec4(0.0,0.0,0.0,0.0)
	};
	cuadrado14->vertices.push_back(v1);
	cuadrado14->vertices.push_back(v2);
	cuadrado14->vertices.push_back(v3);
	cuadrado14->vertices.push_back(v4);
}


void dibujar() {
	cuadrado->dibujar(GL_QUADS);
	cuadrado1->dibujar(GL_QUADS);
	cuadrado2->dibujar(GL_QUADS);
	cuadrado3->dibujar(GL_QUADS);
	cuadrado4->dibujar(GL_QUADS);
	cuadrado5->dibujar(GL_QUADS);
	cuadrado6->dibujar(GL_QUADS);
	cuadrado7->dibujar(GL_QUADS);
	cuadrado8->dibujar(GL_QUADS);
	cuadrado9->dibujar(GL_QUADS);
	cuadrado10->dibujar(GL_QUADS);
	cuadrado11->dibujar(GL_QUADS);
	cuadrado12->dibujar(GL_QUADS);
	cuadrado13->dibujar(GL_QUADS);
	cuadrado14->dibujar(GL_QUADS);
}

void actualizar() {

}

int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window =
		glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << 
			glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL =
		glGetString(GL_VERSION);
	cout << "Version OpenGL: "
		<< versionGL;

	 Cuadrado();
	 Cuadrado1();
	 Cuadrado2();
	 Cuadrado3();
	 Cuadrado4();
	 Cuadrado5();
	 Cuadrado6();
	 Cuadrado7();
	 Cuadrado8();
	 Cuadrado9();
	 Cuadrado10();
	 Cuadrado11();
	 Cuadrado12();
	 Cuadrado13();
	 Cuadrado14();

	const char *rutaVertex = 
		"VertexShader.shader";
	const char *rutaFragment = 
		"FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();

	//Establecer shader al modelo
	//inicializar el vertex array 

	cuadrado->shader = shader;
	cuadrado->inicializarVertexArray(posicionID, colorID);

	cuadrado1->shader = shader;
	cuadrado1->inicializarVertexArray(posicionID, colorID);

	cuadrado2->shader = shader;
	cuadrado2->inicializarVertexArray(posicionID, colorID);

	cuadrado3->shader = shader;
	cuadrado3->inicializarVertexArray(posicionID, colorID);

	cuadrado4->shader = shader;
	cuadrado4->inicializarVertexArray(posicionID, colorID);

	cuadrado5->shader = shader;
	cuadrado5->inicializarVertexArray(posicionID, colorID);

	cuadrado6->shader = shader;
	cuadrado6->inicializarVertexArray(posicionID, colorID);

	cuadrado7->shader = shader;
	cuadrado7->inicializarVertexArray(posicionID, colorID);

	cuadrado8->shader = shader;
	cuadrado8->inicializarVertexArray(posicionID, colorID);

	cuadrado9->shader = shader;
	cuadrado9->inicializarVertexArray(posicionID, colorID);

	cuadrado10->shader = shader;
	cuadrado10->inicializarVertexArray(posicionID, colorID);

	cuadrado11->shader = shader;
	cuadrado11->inicializarVertexArray(posicionID, colorID);

	cuadrado12->shader = shader;
	cuadrado12->inicializarVertexArray(posicionID, colorID);

	cuadrado13->shader = shader;
	cuadrado13->inicializarVertexArray(posicionID, colorID);

	cuadrado14->shader = shader;
	cuadrado14->inicializarVertexArray(posicionID, colorID);


	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(1.0, 0.2, 0.5, 1.0);
		//Borramos
		glClear(
			GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

