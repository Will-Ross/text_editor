#pragma once


#include <QMainWindow>
#include <QTextEdit>

class MainWindow : public QMainWindow
{
public:
	MainWindow();

private:
	QTextEdit* centralWidget;
};
