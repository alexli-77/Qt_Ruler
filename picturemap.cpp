#include "picturemap.h"
#include "ui_picturemap.h"
#include <QPainter>
#include <QPen>
#include <QString>
#include <qlineedit.h>
#include <QDebug>
#include <QMessageBox>
#include <QLabel>
#include <QTextCodec>

inline QString GBK2UTF8(const QString &inStr)
{
    QTextCodec *gbk = QTextCodec::codecForName("GB18030");

    QString g2u = gbk->toUnicode(gbk->fromUnicode(inStr));              // gbk  convert utf8
    return g2u;
}

picturemap::picturemap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::picturemap)
{
    ui->setupUi(this);
    //this->showFullScreen();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();


    //定站点位置
    qreal width = pix.width();
    qreal height = pix.height();
    pix.load("images/hongqi.png");
    width = pix.width();
    height = pix.height();

    pix = pix.scaled(width/6,height/6);
    ui->label_5->resize(pix.width(),pix.height());
    ui->label_5->setPixmap(pix);
    ui->label_5->show();
    //获取图片的
    int x = ui->label_5->pos().x();
    int y = ui->label_5->pos().x();

    ui->lineEdit->setText(tr("%1").arg(x+25));
    ui->lineEdit_3->setText(tr("%1").arg(y+90));

    QWidget *pm = new QWidget;
    pm = this;
}
/******************话坐标系***********************/
void picturemap::paintEvent(QPaintEvent *event)
{
    QPen pen;
    QPainter painter(this);
    pen.setColor(Qt::black);
    painter.setPen(pen);

    QFontMetrics metrics = painter.fontMetrics();
    int textHeight = metrics.ascent() + metrics.descent();
    int width=640;
    int height =320;
    // 移动坐标系
    painter.translate(0, 0);
    int totalCount = 12; //
    int count = 24;        // 分成10成
    float deltaX = width / 24.0f;         // x坐标上每分的宽度
    float deltaY = (float)height / 12; // y坐标上每分的宽度
    // 画横坐标
    painter.drawLine(0, 0, width, 0);
    for (int i = 1; i <= 24; ++i)
    {
     QString distance = tr("%1").arg(i);
     // 绘制坐标刻度 就是那个朝下的小竖杠
     painter.drawLine(deltaX * i, 0, deltaX * i, 4);
     // 绘制坐标处的
     int distanceX = deltaX * i;
     painter.drawText(distanceX-2, textHeight+2, distance);
    }
    // 画纵坐标
    painter.drawLine(0, 0, 0, height);
    //在纵坐标头上写上单位
    painter.drawText(-metrics.width(tr("(m)")),-(deltaY * count + textHeight / 2 + metrics.descent()),tr("(m)"));
    for (int i = 1; i <= 12; ++i)
    {
     QString value = QString("%1").arg(i);
     int stringWidth = metrics.width(value);
     // 绘制坐标刻度
     painter.drawLine(4, i * deltaY, 0, i * deltaY);
     // 绘制坐标值
     painter.drawText(stringWidth - 4, (deltaY * i + textHeight / 2 - metrics.ascent()), value);
    }

    this->setAttribute(Qt::WA_PaintOutsidePaintEvent);//允许在paintevent以外重载
}


void picturemap::mousePressEvent(QMouseEvent *m)
{

    //获得图片的宽和高
    qreal width = pix.width();
    qreal height = pix.height();
    //写入坐标值
    QString edit = ui->label->text();
    QString edit2 = ui->label_2->text();
    QString edit3 = ui->label_3->text();
    QString edit4 = ui->label_4->text();
    int x = m->pos().x();//pos想对于当前活动的窗口
    int y =m->pos().y();

    QPen pen;
    QPainter painter(this);

    painter.setPen(pen);
    painter.drawPoint(x, y);

    ui->label_6->move(x-20,y-40);
    pix.load("images/tuding.png");//,0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither
    width = pix.width();
    height = pix.height();
    pix = pix.scaled(width/6,height/6);
    ui->label_6->resize(pix.width(),pix.height());
    ui->label_6->setPixmap(pix);
    ui->label_6->show();
    ui->lineEdit_2->setText(tr("%1").arg(x));
    ui->lineEdit_4->setText(tr("%1").arg(y));

    QMessageBox::about(this,"****","****");

    ui->label_6->clear();

}

picturemap::~picturemap()
{
    delete ui;
}

void picturemap::on_pushButton_clicked()
{

    update();
    ui->label_6->clear();

}
