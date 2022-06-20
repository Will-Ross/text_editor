#include <MainWindow.h>

MainWindow::MainWindow()
{
	setWindowTitle("Text Editor");

	helloWorld = new QLabel("Hello World!");

	layout = new QVBoxLayout();
	layout->addWidget(helloWorld);
	setLayout(layout);
}