#include "App.h"

int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    
    // Instantiate a new App
    App* myApp = new App("Breakout", 50, 50, 900, 600);

	// Start the app
    myApp->run();
}
