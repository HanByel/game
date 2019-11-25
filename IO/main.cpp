#include "control_IO.hpp"

int main(){
    int ch;
    while(1){
        ch = ControlIO::getinstance().getch();
        printf("%d \n", ch);
        if(ch==27) break;
    }
}
