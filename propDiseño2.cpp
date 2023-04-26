#include <winbgim.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

void grafico(int x, int y, int e){
    
    setcolor(LIGHTBLUE);
    //setfillstyle(EMPTY_FILL, LIGHTBLUE);
    circle(x+4.5*e, y+6*e, 0.5*e);
    circle(x+6.5*e, y+6*e, 0.5*e);

    setcolor(WHITE);
    circle(x+4.5*e, y+6*e, 1*e);
    circle(x+6.5*e, y+6*e, 1*e);
    //boca
    setcolor(10); 
    ellipse(x+5.5*e, y+9*e, 0, 360, 1.5*e, 0.5*e);
    line(x+4.3*e, y+8.75*e, x+6.8*e, y+8.75*e);     
    line(x+4*e, y+9*e, x+7*e,y+9*e);
    line(x+4.3*e, y+9.25*e, x+6.8*e, y+9.25*e);

    line(x+5*e,y+8.5*e,x+5*e,y+9.5*e);
    line(x+6*e,y+8.5*e,x+6*e,y+9.5*e);
    
    //cuerpo
    setcolor(14);
    ellipse(x+5.5*e, y+7*e, 0, 180, 2.5*e, 4*e);
    line(x+3*e, y+7*e, x+3*e, y+10*e);
    line(x+8*e, y+7*e, x+8*e, y+10*e);
    //pantalones
    setcolor(9);
    //setfillstyle(4, 9);
    //bar(x+3*e, y+10*e, x+8*e, y+12*e);
    rectangle(x+3*e, y+10*e, x+8*e, y+12*e);

    //mochila
    setcolor(BLUE);
    ellipse(x+3*e, y+10*e, 90, 270, 1*e, 2*e);
    ellipse(x+8*e, y+10*e, 270, 90, 1*e, 2*e);

    ellipse(x+3*e, y+10*e, 360, 90, 1*e, 2*e);
    ellipse(x+3.1*e, y+10*e, 360, 90, 0.5*e, 1.5*e);

    ellipse(x+8*e, y+10*e, 90, 180, 1*e, 2*e );
    ellipse(x+8.1*e, y+10*e, 90, 180, 0.5*e, 1.5*e );

    //costados izq

    setcolor(7);
    line(x+1.5*e, y+4.5*e, x+1.5*e, y+12*e);
    line(x+2*e, y+4*e, x+2*e, y+9.2*e);
    line(x+2.5*e, y+3*e, x+2.5*e, y+8.2*e);
    line(x+1.5*e, y+12*e, x+3*e, y+12*e);

    line(x+1.5*e, y+4.5*e, x+2*e, y+4.5*e);
    line(x+2*e, y+4*e, x+2.5*e, y+4*e);
    line(x+2.5*e, y+3*e, x+3.5*e, y+3*e);

    line(x+3.5*e, y+3*e, x+3.5*e, y+4.5*e);
    //costado der
    setcolor(7);
    line(x+9.5*e, y+4.5*e, x+9.5*e, y+12*e);
    line(x+9*e, y+4*e, x+9*e, y+9.2*e);
    line(x+8.5*e, y+3*e, x+8.5*e, y+8.2*e);
    line(x+8*e, y+12*e,x+9.5*e , y+12*e);

    line(x+9*e, y+4.5*e, x+9.5*e, y+4.5*e);
    line(x+8.5*e, y+4*e, x+9*e, y+4*e);
    line(x+7.5*e, y+3*e, x+8.5*e, y+3*e);

    line(x+7.5*e, y+3*e, x+7.5*e, y+4.5*e);
    getcolor();
}

int main(){

    initwindow(600, 600);

    grafico(200, 200, 30);

    grafico(10,10,10);

    getch();

}