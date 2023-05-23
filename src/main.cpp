#include <iostream>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "Chess.h"
#include "Board.h"

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_AUDIO);
    int numPlayers = 0; 
    bool color_playerOne = false;

    cout << "\nCHESS\n" << endl;
    cout << "Controls: \n";
    cout << "   LMB - Select/Place pieces\n";
    cout << "   RMB - Toggle perspective\n";
    cout << "   KeyDown - Undo Move\n";
    cout << "   KeyUP - Redo Move\n\n";
    cout << "Enter the number of players:" << endl;
    cout << "1. Single Player" << endl;
    cout << "2. Two Players" << endl;
    cout << "3. Quit" << endl;
    cin >> numPlayers;
    
    if(numPlayers == 3) return 0;
    while (numPlayers != 1 && numPlayers != 2)
    {
        cout << "Invalid input. Please enter 1 for Single Player or 2 for Two Players: ";
        cin >> numPlayers;
    }
    
    if(numPlayers == 1)
    {
        cout << "Enter player's color:" << endl;
        cout << "1. White" << endl; 
        cout << "2. Black" << endl; 
        int colorChoice;
        cin >> colorChoice;
        
        if(colorChoice == 3)
            return 0; 
        
        while(colorChoice != 1 && colorChoice != 2)
        {
            cout << "Invalid input. Please enter 1 for White or 2 for Black: ";
            cin >> colorChoice;
        }
        color_playerOne = (colorChoice == 2); 
    }
    
    cout << "\nLoading...";
    Chess* game = new Chess(numPlayers, !color_playerOne); 
    cout << "\nDone";
    game->start();
    return 0;
}
