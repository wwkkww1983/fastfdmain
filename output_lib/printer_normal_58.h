#ifndef PRINTER_NORMAL_58_H
#define PRINTER_NORMAL_58_H

#include "printer_normal.h"

class Printer_Normal_58 : public Printer_Normal
{
public:
    Printer_Normal_58();
    virtual void tran(blockIns &bins, int xinye_beep);
    virtual QString name();
};

#endif // PRINTER_NORMAL_58_H
