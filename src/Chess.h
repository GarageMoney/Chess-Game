#ifndef CHESS_H
#define CHESS_H

#include <vector>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include "Board.h"
using namespace std;
typedef uint64_t U64;
class Board;

class Chess {
private:
    int numPlayers;
    bool playerColor;
    bool isWhiteTurn;
    const int BOARD_SIZE = 8;
    int SQUARE_SIZE = 100;
    Board* board;
    
    //SDL event variables
    int mouseX; 
    int mouseY;
    bool isPieceSelected;
    int selectedPiece;
    int selectedRow;
    int selectedCol;
    bool togglePerspective; 
    pair<int, int> prevStart;
    pair<int, int> prevEnd;

    //SDL Textures
    SDL_Texture* textureBoard; //chessboard
    vector<SDL_Texture*> textureWhite; //pieces
    vector<SDL_Texture*> textureBlack; //pieces
    SDL_Texture* textureLight; //valid cells

public:
    Chess(int NumPlayers, bool PlayerColor);
    void presentState(SDL_Renderer* renderer);
    bool isGameOver(); //check if game ended
    void start(); //start game loop
};

#endif //CHESS_H