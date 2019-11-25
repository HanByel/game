#ifndef CONTROLIO_HPP
#define CONTROLIO_HPP

#include <stdio.h>
#include <termios.h>
#include <unistd.h>

class ControlIO {
private:
    static ControlIO* mp_Instance;

public:
    ControlIO();
    ~ControlIO();
    static ControlIO &getinstance();

    int getch();

};

#endif // CONTROLIO
