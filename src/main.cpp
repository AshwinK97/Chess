/*
* @author: Hirthanan, Ashwin
* Text based chess game using oop design
*/

#include <iostream>
#include <stdlib.h>
#include "class/Piece.cpp"
#include "class/Pawn.cpp"

using namespace std;

void movePiece(string[8][8]);
void drawBoard(string[8][8]);
void resetBoard(string[8][8], char[2][8], char[2][8]);
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
    std::transform(raw.begin(), raw.end(), raw.begin(), ::tolower);
    string temp = raw.substr(0,1);
    for (int i=0; i<8; i++) {
        if (letters[i] == temp) {
            y = i;
            break;
        }
    }
    x = 8 - (atoi(raw.substr(1,2).c_str()));

    cout << "Enter the location you want to move to: ";
    cin >> raw;
    std::transform(raw.begin(), raw.end(), raw.begin(), ::tolower);
    temp = raw.substr(0,1);
    for (int i=0; i<8; i++) {
        if (letters[i] == temp) {
            y2 = i;
            break;
        }
    }
    x2 = 8 - (atoi(raw.substr(1,2).c_str()));

    board[x2][y2] = board[x][y];
    board[x][y] = ' ';

    drawBoard(board);
    movePiece(board);

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

/* string piece1[][] and piece2[][]
*  will be piece arrays eventually instead of string arrrays
*/

void resetBoard(string board[8][8], char piece1[2][8], char piece2[2][8]) {
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (i<2)
                board[i][j] = piece1[i][j];
            else if (i>5) {
                if (i==6)
                    board[i][j] = piece2[i-5][j];
                else
                    board[i][j] = piece2[i-7][j];
            }
            else
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
    char piece1[2][8] = {{'c','k','b','q','k','b','k','c'},{'p','p','p','p','p','p','p','p'}};
    char piece2[2][8] = {{'C','K','B','Q','K','B','K','C'},{'P','P','P','P','P','P','P','P'}};

    Pawn pawn("Pawn","white", 0, 5);
    cout << pawn.getName() << " " << pawn.getAlive();
    resetBoard(board, piece1, piece2);
    drawBoard(board);
    movePiece(board);

    return 0;
}