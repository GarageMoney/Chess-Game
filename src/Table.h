#ifndef TABLE_H
#define TABLE_H

//Tables represent positions on the board
//from white player's perspective. Tables
//give an estimate of the positional value
//for each piece in hopes of achieving more
//accurate evaluations of the board state.

extern int pawnTable[8][8];
extern int knightTable[8][8];
extern int bishopTable[8][8];
extern int rookTable[8][8];
extern int queenTable[8][8];
extern int kingTable[8][8];

#endif //TABLE_H
