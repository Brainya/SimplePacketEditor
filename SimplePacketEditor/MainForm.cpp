#include "MainForm.h"
#include "MultiInclude.h"

MainForm *MainFormClass;

MainForm::MainForm(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	//initialize pointer
	ui = new Ui::MainFormClass;
	MainFormClass = this;

	//setup gui
	ui->setupUi(this);

	setWindowFlags(Qt::Tool | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowStaysOnTopHint);
	setWindowTitle(windowTitle() + "_" + QString::number(GetCurrentProcessId()));
}

MainForm::~MainForm()
{

}

void MainForm::CheckBox_Toggled(bool state)
{
	QObject *s = sender();

	if (s == ui->checkBoxLogSendPacket)
	{

	}

	else if (s == ui->checkBoxLogRecvPacket)
	{
	}
}

void MainForm::PushButton_Clicked()
{
	QObject *s = sender();

	if (s == ui->pushButtonSendPacket)
	{

	}
}

void MainForm::Action_Triggered()
{
	QObject *s = sender();
}

void MainForm::closeEvent(QCloseEvent *event)
{
	event->ignore();
}