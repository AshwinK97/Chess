/*
* @author: Hirthanan, Ashwin
* Text based chess game using oop design
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void movePiece(string[8][8]);
void drawBoard(string[8][8]);
void resetBoard(string[8][8]);
void skipLine(int);

/* gets the location of the piece from user
*  converts from string to 2 ints
*  the letter gets converted using the letter array
*  the number gets converted using atoi from stdlib.h
*/

void movePiece(string board[8][8]) {
    string raw;
    string letters[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
    int x = 0, y, x2, y2;
    
    cout << "Enter the piece you want to move: ";
    cin >> raw;
    string temp = raw.substr(0,1);
    for (int i=0; i<8; i++) {
        if (letters[i] == temp) {
            x = i;
            break;
        }
    }
    y = 8 - (atoi(raw.substr(1,2).c_str()));

    cout << "Enter the location you want to move to: ";
    cin >> raw;
    temp = raw.substr(0,1);
    for (int i=0; i<8; i++) {
        if (letters[i] == temp) {
            x2 = i;
            break;
        }
    }
    y2 = 8 - (atoi(raw.substr(1,2).c_str()));

    cout << "start - x: " << x << " y: " << y << endl;
    cout << "end   - x2: " << x2 << " y2: " << y2 << endl;
}

void drawBoard(string board[8][8]) {
    skipLine(50);
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (j==0)
                cout << 8-(i) << "  " << '[' << board[i][j] << ']';
            else
                cout << '[' << board[i][j] << ']';
        }
        cout << endl;
    }
    cout << "" << endl;
    cout << "    a  b  c  d  e  f  g  h" << endl;
}

void resetBoard(string board[8][8]) {
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            board[i][j] = ' ';
        }
    }
}

void skipLine(int x) {
    for (int i=0; i<x; i++)
        cout << "" << endl;
}

int main() {
    string board[8][8];
    resetBoard(board);
    drawBoard(board);
    movePiece(board);

    return 0;
}
