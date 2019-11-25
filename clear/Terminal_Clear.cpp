#include "Terminal_Clear.hpp"

ControlIO* ControlIO::mp_Instance = NULL;

ControlIO::ControlIO(){

}

ControlIO::~ControlIO(){

}

ControlIO &ControlIO::getinstance(){
    if (mp_Instance == NULL) {
        mp_Instance = new ControlIO();
    }
    return *mp_Instance;
}

int ControlIO::getch(void)
{
   struct termios data;
   tcgetattr(0, &data);
   data.c_lflag &= ~(ICANON|ECHO);
   tcsetattr(0, TCSAFLUSH, &data);
   return getchar();
}
