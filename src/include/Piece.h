#ifndef Piece_H
#define Piece_H
#include <string>

class Piece
{
    public:
        Piece (string name, string color, int xCoord, int yCoord); // Constructor
        ~Piece (); //Destructor

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
