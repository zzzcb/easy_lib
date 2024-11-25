#include <QApplication>

#include <QWidget>
#include <QPushButton>
#include "flowlayout/flowlayout.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	auto layout = new FlowLayout(&w);
	for (int i = 0; i < 10; ++i)
	{
		layout->addWidget(new QPushButton(QString::number(i)));
	}

	w.show();

	return app.exec();
}

