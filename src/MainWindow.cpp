#include <MainWindow.h>

MainWindow::MainWindow()
{
	centralWidget = new QTextEdit();

	setWindowTitle("Text Editor");
	setCentralWidget(centralWidget);
}