#include<iostream>
#include<bits/stdc++.h>
#include<conio.h> // to check key hit hua ki nhi
#include<windows.h> // to tell where to draw th coordinate system

using namespace std;
#define MAX_LENGTH 1000;
const char DIR_UP= 'U';
const char DIR_DOWN= 'D';
const char DIR_LEFT= 'L';
const char DIR_RIGHT= 'R';
int consoleWidth, consoleHeight;
void intScreen(){
    HANDLE hconsole=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hconsole, &csbi);
    consoleHeight=csbi.srWindow.Bottom-csbi.srWindow.Top+1;
    consoleWidth=csbi.srWindow.Right-csbi.srWindow.Left+1;

}
struct Point{
    int xCoord;
    int yCoord;
    Point(){

    }
    Point(int x,int y){
        xCoord=x;
        yCoord=y;
    }
};
class Snake{
    int length;
    char direction;

    public:
   Point body[1000];
    Snake(int x,int y){
        length=1;
        body[0]=Point(x,y);
        direction=DIR_RIGHT;
    }
    
    int getLength(){
        return length;
    }
    void changeDirection(char newDirection){
        if(newDirection==DIR_UP && !direction==DIR_DOWN){
            direction=newDirection;
        } else if(newDirection==DIR_DOWN && !direction==DIR_UP){
            direction=newDirection;
        } else if(newDirection==DIR_LEFT && !direction==DIR_RIGHT){
            direction=newDirection;
        }
    }
    
};
class Board{
        Snake* snake;
        Point food;
        const char FOOD='o';
        int score;
        public:
        Board(){
            spawnFood();
            snake =new Snake(10,10);
            score=0;
        }
        ~Board(){
            delete snake;
        }
        int getScore(){
            return score;
        }
        void spawnFood(){
        }
        void gotoosy(int x,int y){
            COORD coord;
            coord.X=x;
            coord.Y=y;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

        }
        void draw(){
            system("cls");
            for(int i=0;i<snake->getLength();i++){
                gotoxy(snake->body[i].xCoord, snake->body[i].yCoord);
                cout<<SNAKE_BODY;
            }

        }


    };

int main(){
    intScreen();
    Board * board=new Board();
    return 0;

}
