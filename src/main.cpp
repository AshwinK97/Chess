#include <iostream>

using namespace std;

void drawBoard(string[]);
void resetBoard(string[]);
void skipLine(int);

void drawBoard(string board[]) {
    skipLine(50);
    int vertical[] = {8,7,6,5,4,3,2,1};
    int j = 0;
    for (int i=0; i<64; i++) {
        if (i%8 == 0) {
            cout << endl << vertical[j++] << " " << board[i];
        }
        else {
            cout << board[i];
        }
    }
    cout << "" << endl;
    cout << "   a  b  c  d  e  f  g  h" << endl;
}

void resetBoard(string board[]) {

}

void skipLine(int x) {
    for (int i=0; i<x; i++)
        cout << "" << endl;
}

int main()
{
    string board[64];
    for (int i=0; i<64; i++) {
        board[i] = "[ ]";
    }
    drawBoard(board);
    return 0;
}
