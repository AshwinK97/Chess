#ifndef Piece_H
#define Piece_H

using namespace std;

class Piece
{
    public:
        explicit Piece (string name, string color, int xCoord, int yCoord); // Constructor
        ~Piece (); //Destructor

        string getName();
        bool getAlive();
        void setAlive(bool alive);

        int getXCoord();
        int getYCoord();
        void setCoords(int xCoord, int yCoord);

    private:
        string itsName;
        string itsColor;
        bool itsAlive;
        int itsXCoord, itsYCoord;
};


#endif // Piece_H
