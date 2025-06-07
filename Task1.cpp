#include<iostream>
#include<cstdlib>
#include<ctime> // return correct time
using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    int number=(rand()%100); // ex. 101%100=1 199%100=99 or 200%100=0 hence 1-99+1
    int guess=0;
    cout<<"Welcome to the game"<<endl;
    cout<<"You have to choose number bw 1 to 100"<<endl;
    cout<<"if you guess correct number then You will WIN!!!!"<<endl;
    do{
        cout<<"Guess your number (1-100): ";
        cin>>guess;
        if(guess>number){
            cout<<"Nope "<< guess <<" is lower"<<endl;
        } else if(guess<number){
            cout<<"Nope " << guess << " is higher"<<endl;

        } else{
            cout<<"You won"<<endl;
        }
            

        } while(guess!=number);

        
    }


