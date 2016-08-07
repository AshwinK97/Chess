#include <iostream>

using namespace std;

void drawBoard(string board[]) {
    for (int i=0; i<64; i++) {
        if ((i+1)%8 == 0) {
            cout << board[i] << "  " << (9 - (i+1)/8)  << endl;
        }
        else
            cout << board[i];
    }
    cout << "" << endl;
    cout << " 1  2  3  4  5  6  7  8" << endl;
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
