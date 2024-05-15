#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>

class PopDialog : public QDialog
{
public:
    CustomDialog(QWidget* parent = nullptr) : QDialog(parent)
    {
        setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
        setAttribute(Qt::WA_TranslucentBackground);    // 设置窗口背景为透明
        setFixedSize(560, 600);

        setStyleSheet(
            "background-image: url(:/image/image/dialog_background.png);");    // 设置背景透明度

        QVBoxLayout* layout = new QVBoxLayout(this);
        QLabel*      label  = new QLabel(this);
        label->setStyleSheet(
            "background-image: url(:/image/image/dialog_background.png);");    // 设置背景透明度
        layout->addWidget(label);
        layout->setSpacing(0);
        layout->setContentsMargins(0, 0, 0, 0);
        setLayout(layout);
    }
};