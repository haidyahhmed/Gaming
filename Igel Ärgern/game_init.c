#include "game_init.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * This function creates the board for the first time
 *
 * Input: board - a 6x9 array of squares
 *
 */
void initialize_board(square board[NUM_ROWS][NUM_COLUMNS]){

    for (int i =0; i< NUM_ROWS; i++){
        for(int j =0; j < NUM_COLUMNS; j++){
            //creates an obstacle square at positions (0,3), (1,6), (2,4), (3,5), (4,2) and (5,7)
            if((i == 0 && j==3) || (i == 1 && j == 6) || (i ==2 && j ==4)
                    || (i == 3 && j ==5) || (i==4 && j==2) || (i==5 && j==7)){
                board[i][j].type = OBSTACLE;
            } else{
                //creates a normal square otherwise
                board[i][j].type = NORMAL;
            }
            board[i][j].stack = NULL;
        }
    }
}


 /*
 * This function creates players for the first time
 *
 * Input: the array of players to be initialized
 * Output: The number of players of the game
 */
int initialize_players(player players[]){
    int i=0;
    int morePlayers;
    bool flag[6];
    for (int i = 0; i < 6; i++)
         { flag[i] = false; }

    while (i<6)
    {
        printf("\nEnter the name for player %d: ", i);
        printf("\n(Note that the name you entered must not start with space.)\n");
        fgets(players[i].playerName, 30, stdin);
        while(1)
        {
            if(players[i].playerName[0] != '\n' && players[i].playerName[0] != ' ')
            {
                if(players[i].playerName[strlen(players[i].playerName)]=='\n')
                    { players[i].playerName[strlen(players[i].playerName)] = '\0'; }
                break;
            }
            else
            {
                printf("Invalid Name....Please, Enter the name for player %d: ", i);
                printf("\n(Note that the name you entered must not start with space.)\n");
                fgets(players[i].playerName, 30, stdin);
            }
        }

        /*getting the color of the player from the user*/

        colorSelection(players, flag, i);



        /*Asking the player if there is another player*/
        /*This code occurs when at least 2 players have been entered (minimum two are required to play the game )*/
        if (i >= 1 && i < 5) /*Greater or equal to 1 and less than 5*/
        {
            printf("\nIs there another player? (1 for yes, 0 for no): ");
            do /*Keep asking the user for a valid response which is either 0 or 1; being the only valid responses*/
            {
                scanf("%d", &morePlayers);
            } while (morePlayers != 1 && morePlayers != 0);

            fgetc(stdin); /*Eating newline*/

            if (morePlayers == 0) /*Case where there is no more players as indicated by the user the return value is 2*/
            {
                return i+1;
            }
        }
        i++; /*Incrementing i*/
    }


        return i;
    }

//Function that lets users select a colour.
void colorSelection(player players[], bool flag[], int playerNumb)
{
    //Declaring variables to store the user's colour choice and each of the options.
    int colourChoice;
    char *colours[6] = {"RED", "BLUE", "GREEN", "YELLOW", "PINK", "ORANGE"};

    //Declaring variables for loop break.
    int loopBreak = 0;
    bool loopFlag = false;

    //Loop for error check.
    while (loopBreak == 0)
    {
        //Resetting loopFlag to false after previous loop.
        loopFlag = false;

        //Displaying available colours for user to choose from and stores their input.
        printf("\nPlayer %d: %s\nPlease select a colour from the list below:\n", playerNumb , players[playerNumb].playerName);
        for (int i = 0; i < 6; i++)
        {
            if (flag[i] != true) //if the flag is false then the colour hasn't been taken and its printed in the menu.
            {
                printf("\t%d: %s\n", i , colours[i]);
            }
            else
            {
                printf("\t   TAKEN\n");
            }
        }
        printf("\nEnter choice: ");
        scanf("%d", &colourChoice);
        fgetc(stdin); /*Eating the new line*/

        while(1)
        {
            if( colourChoice < 0 ||  colourChoice > 5)
            {
                printf("You did not enter a valid number....\n");
                printf("(Enter 0 for Red, 1 for Blue, 2 for Green, 3 for Yellow, 4 for Pink, 5 for Orange).\n");
                scanf("%d", &colourChoice);
                fgetc(stdin); /*Eating the new line*/
            }
            else
            {
                //Validation check to see if the choice is valid.
        if (flag[colourChoice ] == true)
        {
            printf("\nERROR: Colour already taken.\n");
            loopFlag = true;
        }

        //If so, then the colour is assigned to the user. There's a case for every possible colour choice.
        if (loopFlag == false)
        {
            switch (colourChoice)
            {
            case 0:
                if (flag[0] == false)
                {
                    players[playerNumb].col = RED;
                    flag[0] = true;
                    loopBreak = 1;
                    break;
                }

            case 1:
                if (flag[1] == false)
                {
                    players[playerNumb].col = BLUE;
                    flag[1] = true;
                    loopBreak = 1;
                    break;
                }

            case 2:
                if (flag[2] == false)
                {
                    players[playerNumb].col = GREEN;
                    flag[2] = true;
                    loopBreak = 1;
                    break;
                }

            case 3:
                if (flag[3] == false)
                {
                    players[playerNumb].col = YELLOW;
                    flag[3] = true;
                    loopBreak = 1;
                    break;
                }

            case 4:
                if (flag[4] == false)
                {
                    players[playerNumb].col = PINK;
                    flag[4] = true;
                    loopBreak = 1;
                    break;
                }

            case 5:
                if (flag[5] == false)
                {
                    players[playerNumb].col = ORANGE;
                    flag[5] = true;
                    loopBreak = 1;
                    break;
                }
            }
        } break;
			}
        }

    }
}
