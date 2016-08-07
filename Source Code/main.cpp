#include <iostream>

using namespace std;

void drawBoard(string[]) {
    for (int i=0; i<board.length; i++) {
			if ((i+1)%8 == 0) {
				System.out.println(board[i] + "  " + (9 - (i+1)/8) );
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
        cout << board[i];
    }
    return 0;
}
