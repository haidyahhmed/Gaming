
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_init.h"
#include "game_logic.h"



int main(int argc, char** argv) {

    clock_t t1=clock();
    Your code that takes more than 1 sec;
   printf("The start time taken is.. %f \n",((double)t1/CLOCKS_PER_SEC));

    srand(time(NULL));

    //the board is defined as a 2-Dimensional array of squares
    square board[NUM_ROWS][NUM_COLUMNS]; 

    //an array containing the players (MAX 6 players)
    player players[6];

    //the number of players
    int numPlayers =0;

    //creates the squares of the board
    initialize_board(board);

    //prints the board
    print_board(board);

    //creates the players
    numPlayers = initialize_players(players);


    //asks each player to place their tokens
    //on the first column of the board
    place_tokens(board, players, numPlayers);

    //clock_t t2=clock();
    //printf("The time taken for placing tokens is.. %f\n ", ((double)(t2-t1)/CLOCKS_PER_SEC));


    //manages the turns of the game and identifies a winner
    play_game(board, players, numPlayers);

    clock_t t3=clock();
    printf("The time taken for the Game is.. %f\n ", ((double)(t3-t1)/CLOCKS_PER_SEC));

    return 0;
}

