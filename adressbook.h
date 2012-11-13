#ifndef ADRESSBOOK_H
#define ADRESSBOOK_H

#include <QWidget>

namespace Ui {
class adressbook;
}

class adressbook : public QWidget
{
    Q_OBJECT
    
public:
    explicit adressbook(QWidget *parent = 0);
    ~adressbook();
    
private:
    Ui::adressbook *ui;
};

#endif // ADRESSBOOK_H
