#ifndef DIALOG_H
#define DIALOG_H

#include <QtWidgets/QDialog>
#include "ui_dialog.h"

class Dialog : public QDialog
{
    Q_OBJECT
public:
    Dialog();

private slots:
    void focusChanged(QWidget *old, QWidget *now);

private:
    Ui::Dialog m_ui;
};

#endif
