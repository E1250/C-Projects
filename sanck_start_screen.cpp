#include <queue>
#include <graphics.h>
#include <cstdlib>
#include <ctime>
#include <iostream>   // Provides cout
#include <windows.h>
#include<conio.h>
#include "dos.h"
using namespace std;

const int W = 12;
const int EMPTY= 0;
const int BODY = 1;
const int RAND_POINT= 2;
const int Wall = 3;
const int boardXSize=100;
const int boardYSize=50;
int board[boardXSize][boardYSize]={0};

struct Point{
    int x;
    int y;
    Point(int x,int y): x(x), y(y){}
};

void drawWall(int x,int y,colors color,bool full){
    setfillstyle(SOLID_FILL, color);
    if(!full){
        bar(x*12+1, y*12+1, x*12 + W, y*12+W);
    }else{
        bar(x*12, y*12, x*12+W, y*12+W);
    }
}

void draw_Start_Screen(){
    initwindow(1200, 600,"Snack Game",150,100);
    srand (time(NULL));
    setbkcolor(RED);
    cleardevice();

    for(int x=0;x<boardXSize;x++){
            for(int y=0;y<boardYSize/2;y++){
                drawWall(x,y,BLACK,false);
        }
        delay(1);
    }
    //Beep(1500,500);
    ///////////////
    for(int x=boardXSize;x>=0;x--){
            for(int y=boardYSize;y>=boardYSize/2;y--){
                drawWall(x,y,BLACK,false);
        }
        delay(1);
    }
        //Beep(1000,1000);
        /////////
        setbkcolor(BLACK);
        cleardevice();
        for(int x=0;x<boardXSize;x++){
                for(int y=0;y<boardYSize;y++){
                    drawWall(x,y,WHITE,true);
            }
            delay(1);
        }
        //Beep(1000,1000);
        closegraph();

}

void draw_end_board(int xStart,int xSize,colors wall_color){
    for(int x=xStart+1;x<xSize-1;x++){
            for(int y=1;y<boardYSize-1;y++){
                drawWall(x,y,wall_color,false);
        }
        delay(1);
    }
}


void game_End_Screen(int winner){

        settextstyle(0, HORIZ_DIR, 7);
        setcolor(WHITE);
        if(winner==1){
            draw_end_board(0,boardXSize/2,GREEN);
            setbkcolor(GREEN);
            outtextxy(150, 450, "Winner");
            outtextxy(100, 100, "PLAYER 1");

            draw_end_board(boardXSize/2,boardXSize,RED);
            setbkcolor(RED);
            outtextxy(780, 450, "Loser" );
            outtextxy(680,100, "PLAYER 2");
        }else{
            draw_end_board(boardXSize/2,boardXSize,GREEN);

            setbkcolor(GREEN);

            outtextxy(750, 450, "Winner" );
            outtextxy(680,100, "PLAYER 2");

            draw_end_board(0,boardXSize/2,RED);
            setbkcolor(RED);
            outtextxy(150, 450, "Loser");
            outtextxy(100, 100, "PLAYER 1");

        }

}


int main(){
    draw_Start_Screen();

    initwindow(1200, 600,"Snack Game",150,100);
    setbkcolor(WHITE);
    cleardevice();
    game_End_Screen(2);
    getch();
return 0;
}
