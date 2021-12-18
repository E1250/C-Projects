#include <queue>
#include <graphics.h>
#include <cstdlib>
#include <ctime>
#include <iostream>   // Provides cout
#include <windows.h>
#include<conio.h>


using namespace std;

const int W = 12;
const int EMPTY= 0;
const int BODY = 1;
const int RAND_POINT= 2;
const int Wall = 3;
bool gameover = false;

struct Point{
    int x;
    int y;
    Point(int x,int y): x(x), y(y){}
};
queue<Point> snakeBody;

int board[50][50]={0};
int sou(){

    Beep( 1480,200);

    Beep( 1568,200);

    Beep( 1568,200);

    Beep( 1568,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 369.99,200);

    Beep( 392,200);

    Beep( 369.99,200);

    Beep( 392,200);

    Beep( 392,400);

    Beep( 196,400);

return 0;

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 880,200);

    Beep( 830.61,200);

    Beep( 880,200);

    Beep( 987.77,400);


    Beep( 880,200);

    Beep( 783.99,200);

    Beep( 698.46,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 880,200);

    Beep( 830.61,200);

    Beep( 880,200);

    Beep( 987.77,400);

    Sleep( 200);

    Beep( 1108,100);
    Beep( 1174.7,200);
    Beep( 1480,100);
    Beep( 1568,200);

    Sleep( 200);
    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 783.99,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 880,200);

    Beep( 830.61,200);

    Beep( 880,200);

    Beep( 987.77,400);


    Beep( 880,200);

    Beep( 783.99,200);

    Beep( 698.46,200);


    Beep( 659.25,200);

    Beep( 698.46,200);

    Beep( 784,200);

    Beep( 880,400);

    Beep( 784,200);

    Beep( 698.46,200);

    Beep( 659.25,200);



    Beep( 587.33,200);

    Beep( 659.25,200);

    Beep( 698.46,200);

    Beep( 784,400);

    Beep( 698.46,200);

    Beep( 659.25,200);

    Beep( 587.33,200);



    Beep( 523.25,200);

    Beep( 587.33,200);

    Beep( 659.25,200);

    Beep( 698.46,400);

    Beep( 659.25,200);

    Beep( 587.33,200);

    Beep( 493.88,200);

    Beep( 523.25,200);


    Sleep( 400);
    Beep( 349.23,400);

    Beep( 392,200);

    Beep( 329.63,200);

    Beep( 523.25,200);

    Beep( 493.88,200);

    Beep( 466.16,200);



    Beep( 440,200);

    Beep( 493.88,200);

    Beep( 523.25,200);

    Beep( 880,200);

    Beep( 493.88,200);

    Beep( 880,200);

    Beep( 1760,200);

    Beep( 440,200);



    Beep( 392,200);

    Beep( 440,200);

    Beep( 493.88,200);

    Beep( 783.99,200);

    Beep( 440,200);

    Beep( 783.99,200);

    Beep( 1568,200);

    Beep( 392,200);



    Beep( 349.23,200);

    Beep( 392,200);

    Beep( 440,200);

    Beep( 698.46,200);

    Beep( 415.2,200);

    Beep( 698.46,200);

    Beep( 1396.92,200);

    Beep( 349.23,200);



    Beep( 329.63,200);

    Beep( 311.13,200);

    Beep( 329.63,200);

    Beep( 659.25,200);

    Beep( 698.46,400);

    Beep( 783.99,400);



    Beep( 440,200);

    Beep( 493.88,200);

    Beep( 523.25,200);

    Beep( 880,200);

    Beep( 493.88,200);

    Beep( 880,200);

    Beep( 1760,200);

    Beep( 440,200);



    Beep( 392,200);

    Beep( 440,200);

    Beep( 493.88,200);

    Beep( 783.99,200);

    Beep( 440,200);

    Beep( 783.99,200);

    Beep( 1568,200);

    Beep( 392,200);



    Beep( 349.23,200);

    Beep( 392,200);

    Beep( 440,200);

    Beep( 698.46,200);

    Beep( 659.25,200);

    Beep( 698.46,200);

    Beep( 739.99,200);

    Beep( 783.99,200);

    Beep( 392,200);

    Beep( 392,200);

    Beep( 392,200);

    Beep( 392,200);

    Beep( 196,200);

    Beep( 196,200);

    Beep( 196,200);



    Beep( 185,200);

    Beep( 196,200);

    Beep( 185,200);

    Beep( 196,200);

    Beep( 207.65,200);

    Beep( 220,200);

    Beep( 233.08,200);

    Beep( 246.94,200);
    return 0;
    }

void gameover_screen(){
    initwindow(300,310,"Game Over",600,250);
    setbkcolor(2);
    cleardevice();

    readimagefile("pic.jpg",0,0,300,310);

    //settextstyle(10,0,6);
    //outtextxy(15,110,"Game Over");

    //sou();
    _getch();
    closegraph();
    }


enum directions{UP,DOWN, LEFT, RIGHT};
directions current_direction = DOWN;

void drawSnakeCell(int x,int y){
    setfillstyle(SOLID_FILL, GREEN);
    bar(x*12+1, y*12+1, x*12 + W, y*12+W);
}
void eraseSnakeCell(int x,int y){
    setfillstyle(SOLID_FILL, WHITE);
    bar(x*12+1, y*12+1, x*12 + W, y*12+W);
}
void drawRandPoint(int x,int y){
    setfillstyle(SOLID_FILL, BLUE);
    bar(x*12+1, y*12+1, x*12 + W, y*12+W);
    }

void START_screen(){
    initwindow(600,600,"Welcome to Snake Game :)",450,100);
    setbkcolor(2);
    cleardevice();

    readimagefile("600x600bb.jpg",0,0,600,600);

    //settextstyle(10,0,6);
    //outtextxy(15,110,"Game Over");
    sou();
    delay(500);

    closegraph();
    }
////////////////////////////////////////
void drawWall(int x,int y){
 setfillstyle(SOLID_FILL, BLACK);
    bar(x*12+1, y*12+1, x*12 + W, y*12+W);
    }

/////////////////////////////
void drawBoard(){
    for(int r=0;r<50;r++){
        for(int c=0;c<50;c++){
            switch(board[r][c]){
            case EMPTY:
                break;
            case BODY:
                drawSnakeCell(r,c);
                break;
            case RAND_POINT:
                drawRandPoint(r,c);
                break;
           case Wall:
                drawWall(r,c);
                break;
            }
        }
    }
}
////////////////
void initWall(){
        srand (time(NULL));
        for(int x=0;x<50;x++){
            for(int y=0;y<50;y++){
                if(x==0 || x==49){
                    drawWall(x,y);
                    board[x][y] = Wall;
            }
                else if(y==0 || y==49){
                    drawWall(x,y);
                    board[x][y] = Wall;}
}
}
}
void generateRandomPoint(){
    int randX, randY;
    do{
        randX = rand() % 50;
        randY = rand() % 50;
    }while(board[randX][randY] != EMPTY);
    board[randX][randY] = RAND_POINT;
    drawRandPoint(randX,randY);
}
void initSnake()
{
    srand (time(NULL));
    int x = 20;
    int y = 5;
    for(int i=0;i<10;i++){
        board[x][y] = BODY;
        Point p(x,y);
        snakeBody.push(p);
        y += 1;
    }
    generateRandomPoint();
}

void moveSnake(directions direction){
    current_direction = direction;
    Point p = snakeBody.back();
    switch(direction){
    case UP:
        p.y = p.y - 1;
        break;
    case DOWN:
        p.y = p.y + 1;
        break;
    case LEFT:
        p.x = p.x - 1;
        break;
    case RIGHT:
        p.x = p.x + 1;
        break;
    }
//خبطه التعبان //////

     switch(board[p.x][p.y]){
    case EMPTY:
        snakeBody.push(p);
        drawSnakeCell(p.x,p.y);
        board[p.x][p.y] = BODY;
        p = snakeBody.front();
        snakeBody.pop();
        eraseSnakeCell(p.x,p.y);
        board[p.x][p.y] = EMPTY;
        break;
    case RAND_POINT:
        Beep(250,250);
        snakeBody.push(p);
        drawSnakeCell(p.x,p.y);
        board[p.x][p.y] = BODY;

        generateRandomPoint();
        break;
    case Wall:
        setbkcolor(BLACK);
        cleardevice();
        gameover_screen();
        gameover=true;
        break;
    case BODY:
        Beep( 1480,200);
        setbkcolor(BLACK);
        cleardevice();
        gameover_screen();
        gameover=true;
        break;
    }
}

int main( )
{

    START_screen();
    int i;
    char c;
    initwindow(600, 600,"Snack Game",450,100);
    setbkcolor(WHITE);
    cleardevice();
    initSnake();
    initWall();
    drawBoard();
    clock_t start = clock();
    clock_t end;
    do
    {
        //delay(100);
        end = clock();
        int diff = end - start;
        if(diff >= 150){
            moveSnake(current_direction);
            start = clock();
        }
        if(kbhit()){
            c = (char) getch( );
            if (c != 0)
                cout << "That is ASCII value: " << (int) c << endl;
            else
            {   // Process one of the special keys:
               c = (char) getch( );
                switch (c)
                {
                    case KEY_UP:
                        if(current_direction!=DOWN && current_direction!= UP&&gameover!= true){
                            moveSnake(UP);
                        }
                              break;
                    case KEY_LEFT:
                            if(current_direction!=RIGHT&&current_direction!= LEFT&& gameover!= true){
                            moveSnake(LEFT);
                        }
                            break;
                    case KEY_RIGHT:
                           if(current_direction!=LEFT&& current_direction!= RIGHT&&gameover!= true){
                            moveSnake(RIGHT);
                        }
                           break;
                    case KEY_DOWN:
                            if(current_direction!=UP&& current_direction!= DOWN&&gameover!= true){
                            moveSnake(DOWN);
                        }
                            break;
                    default: cout << "Unknown extended key." << endl;
                }
            }
        }
    }while (c != 27);

    while( ! kbhit());
    closegraph( );
}
