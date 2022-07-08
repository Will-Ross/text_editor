#include <GraphicsScene.h>
#include <QGraphicsView>
#include <MainWindow.h>

GraphicsScene::GraphicsScene(QObject* parent) : QGraphicsScene(parent)
{
	setSceneRect(0, 0, 600, 400);
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
	const auto view = qobject_cast<QGraphicsView*>(this->parent());
	const auto main = qobject_cast<MainWindow*>(view->parentWidget());
	const auto pos = event->buttonDownScenePos(Qt::MouseButton::LeftButton);

	switch (main->getAppMode())
	{
	case AppMode::ADD_STATE:
		addEllipse(pos.x(), pos.y(), 10, 10);
		break;
	case AppMode::DEFAULT: break;
	default: break;
	}

}
