#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_chat.h"
#include "ui_cove_chat.h"

cove_chat::cove_chat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_chat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

cove_chat::~cove_chat()
{
    delete ui;
}
