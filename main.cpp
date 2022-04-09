#include <iostream>
#include <windows.h>
#include "blocks.h"

int sc[HEIGHT][WIDTH] ={0,};

void draw_sc();
void print_line();
void print_menu();

void play(){
    while(true){
        system("cls");
        draw_sc();
        Sleep(1000);
    }
}

void print_howto(){
    system("cls");
    print_line();
    cout << "\n\n";
    cout << "Just a Tetris...\n\n";
    print_line(); 
    cout << "\nDo you back to mainmenu? (Y/N) : ";

}

void end_game(){
    system("cls");
    cout << "\n\nquit the game...";
    Sleep(2000);
    exit(0); 
}

int menu(){
    system("cls");
    print_menu();
    int input; cin >> input;
    switch(input){
        case 1:
            play();
            break;
        case 2:
            print_howto();
            char input; cin >> input;
            if(input == 'Y' || input =='y') return 1;
            else if(input =='n' || input =='n') return 0;
            break;
        case 3:
            return 0;
            break;
    }
}

void print_menu(){
    print_line();
    cout <<"\n\n";
    cout << "1. play\n\n";
    cout << "2. how to play\n\n";
    cout << "3. exit\n\n";
    print_line(); 
    cout << "\n your selection : ";
}

void clean_sc(){
    for(int i=0; i<HEIGHT; i++){
        for(int j=0; j<WIDTH; j++){
            sc[i][j]=0;
        }
    }
}

bool is_fill(int x, int y){
    if(sc[x][y]==1) return true;
    else return false;
}

void print_dot(char ch){
    printf("%c",ch);
}

void print_line(){
    printf("============");
}

void draw_sc(){
    print_line();
    for(int i=0; i<HEIGHT; i++){
        cout << " ";
        for(int j=0; j<WIDTH; j++){
            if(is_fill(i,j)) print_dot('#');
            else  print_dot(' ');
        }
        cout << "\n";
    }
    print_line();
}

int main(){
    while(true){
        int q =menu();
        if(q == 0) end_game();
        else if(q ==1) continue;
        break;
    }
}