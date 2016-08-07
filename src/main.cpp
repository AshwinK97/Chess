/*
* @author: Hirthanan, Ashwin
* Text based chess game using oop design
*/

#include <iostream>

using namespace std;

void drawBoard(string[][8]);
void resetBoard(string[][8]);
void skipLine(int);

void drawBoard(string board[][8]) {
    skipLine(50);
    int vertical[] = {8,7,6,5,4,3,2,1};
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (j==0)
                cout << i+1 << "  " << board[i][j];
            else
                cout << board[i][j];
        }
        cout << endl;
    }
    cout << "" << endl;
    cout << "    a  b  c  d  e  f  g  h" << endl;
}

void resetBoard(string board[][8]) {
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            board[i][j] = "[ ]";
        }
    }
}

void skipLine(int x) {
    for (int i=0; i<x; i++)
        cout << "" << endl;
}

int main()
{
    string board[8][8];
    resetBoard(board);
    drawBoard(board);

    return 0;
}
