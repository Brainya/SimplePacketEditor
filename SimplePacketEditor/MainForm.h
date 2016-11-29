#ifndef MAINFORM_H
#define MAINFORM_H

#include "ui_MainForm.h"

class MainForm : public QMainWindow
{
	Q_OBJECT

public:
	MainForm(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainForm();

	Ui::MainFormClass *ui;

private slots:
	void CheckBox_Toggled(bool state);
	void PushButton_Clicked();
	void Action_Triggered();

protected:
	void closeEvent(QCloseEvent *event);
};

extern MainForm *MainFormClass;

#endif // MAINFORM_H
