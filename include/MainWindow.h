#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
public:
	MainWindow();

private:
	QLabel* helloWorld;
	QVBoxLayout* layout;
};
