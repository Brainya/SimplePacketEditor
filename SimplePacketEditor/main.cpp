#include "MainForm.h"
#include <QtGui/QApplication>
#include "MultiInclude.h"

int main(int argc, char **argv)
{
	QApplication a(argc, argv);
	MainForm w;

	w.show();

	return a.exec();
}

BOOL APIENTRY DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		boost::thread(&main, 0, (char **)NULL);

		break;
	}

	return TRUE;
}