//
//  ContentView.swift
//  Shared
//
//  Created by Dzuy Dang on 7/1/22.
//

#include <iostream>
using namespace std;

//Global constants
const int NUM_ROWS = 3;
const int NUM_COLUMNS = 3;
string gameGrid [NUM_ROWS][NUM_COLUMNS] = {"*","*","*","*","*","*","*","*","*"};
bool gameOn = true;

void showBoard (int NUM_ROWS, int NUM_COLUMNS)
{
    for (int x=0;x<NUM_ROWS;x++)
    {
        for (int y=0;y<NUM_COLUMNS;y++)
        {
            cout << gameGrid [x][y] << " ";
        }
        cout << endl;
    }
}

//For player X to play
void fillBoardX (int playerRowX, int playerColumnX)
{
    
    gameGrid [playerRowX][playerColumnX] = "x";
    showBoard (NUM_ROWS, NUM_COLUMNS);
}
//For player O to play
void fillBoardO (int playerRowO, int playerColumnO)
{
  gameGrid [playerRowO][playerColumnO]="O";
showBoard (NUM_ROWS, NUM_COLUMNS);
}

//To check for a winner
void gameCheck ()
        {
            if (gameGrid[0][0] != "*" && gameGrid[2][2] != "*" && gameGrid[1][1]!= "*") //checks top left to bottom right diagonal
            {
               if(gameGrid[0][0]==gameGrid[2][2] && gameGrid[2][2]==gameGrid[1][1])
               {
                   if (gameGrid[0][0] == "x" && gameGrid[2][2] == "x" && gameGrid[1][1] == "x") //works
                   {
                       gameOn = false;
                cout << "GAME OVER \n";
                cout << "Player 1 Wins!!";
                   }
                   else if(gameGrid[0][0] == "O" && gameGrid[2][2] == "O" && gameGrid[1][1] == "O") // works
                   {
                       gameOn = false;
                cout << "GAME OVER \n";
                cout << "Player 2 Wins!!";
                   }
                }
            }
    
            if (gameGrid[0][0] != "*" && gameGrid[0][1] != "*" && gameGrid[0][2]!= "*") //checks top row
            {
               if(gameGrid[0][0]==gameGrid[0][1] && gameGrid[0][1]==gameGrid[0][2])
               {
                   if (gameGrid[0][0] == "x" && gameGrid[0][1] == "x" && gameGrid[0][2] == "x") //works
                   {
                       gameOn = false;
                cout << "GAME OVER \n";
                cout << "Player 1 Wins!!";
                   }
                   else if(gameGrid[0][0] == "O" && gameGrid[0][1] == "O" && gameGrid[0][2] == "O") // works
                   {
                       gameOn = false;
                cout << "GAME OVER \n";
                cout << "Player 2 Wins!!";
                   }
                }
            }
           
        
        if (gameGrid[0][0] != "*" && gameGrid[1][0] != "*" && gameGrid[2][0]!= "*") //checks left column
        {
           if(gameGrid[0][0]==gameGrid[1][0] && gameGrid[1][0]==gameGrid[2][0])
           {
               if (gameGrid[0][0] == "x" && gameGrid[1][0] == "x" && gameGrid[2][0] == "x") //works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 1 Wins!!";
               }
               else if(gameGrid[0][0] == "O" && gameGrid[1][0] == "O" && gameGrid[2][0] == "O") // works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 2 Wins!!";
               }
            }
        }
           
        if (gameGrid[2][2] != "*" && gameGrid[2][1] != "*" && gameGrid[2][0]!= "*") //checks bottom row
        {
           if(gameGrid[2][2]==gameGrid[2][1] && gameGrid[2][1]==gameGrid[2][0])
           {
               if (gameGrid[2][2] == "x" && gameGrid[2][1] == "x" && gameGrid[2][0] == "x") //works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 1 Wins!!";
               }
               else if(gameGrid[2][2] == "O" && gameGrid[2][1] == "O" && gameGrid[2][0] == "O") // works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 2 Wins!!";
               }
            }
        }
           
        if (gameGrid[2][2] != "*" && gameGrid[1][2] != "*" && gameGrid[0][2]!= "*") //checks right column
        {
           if(gameGrid[2][2]==gameGrid[1][2] && gameGrid[1][2]==gameGrid[0][2])
           {
               if (gameGrid[2][2] == "x" && gameGrid[1][2] == "x" && gameGrid[0][2] == "x") //works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 1 Wins!!";
               }
               else if(gameGrid[2][2] == "O" && gameGrid[1][2] == "O" && gameGrid[0][2] == "O") // works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 2 Wins!!";
               }
            }
        }
            
        
        if (gameGrid[0][1] != "*" && gameGrid[1][1] != "*" && gameGrid[2][1]!= "*") //checks middle column
        {
           if(gameGrid[0][1]==gameGrid[1][1] && gameGrid[1][1]==gameGrid[2][1])
           {
               if (gameGrid[0][1] == "x" && gameGrid[1][1] == "x" && gameGrid[2][1] == "x") //works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 1 Wins!!";
               }
               else if(gameGrid[0][1] == "O" && gameGrid[1][1] == "O" && gameGrid[2][1] == "O") // works
               {
                   gameOn = false;
            cout << "GAME OVER \n";
            cout << "Player 2 Wins!!";
               }
            }
        }
    if (gameGrid[1][0] != "*" && gameGrid[1][1] != "*" && gameGrid[1][2]!= "*") //checks middle row
    {
       if(gameGrid[1][0]==gameGrid[1][1] && gameGrid[1][1]==gameGrid[1][2])
       {
           if (gameGrid[1][0] == "x" && gameGrid[1][1] == "x" && gameGrid[1][2] == "x") //works
           {
               gameOn = false;
        cout << "GAME OVER \n";
        cout << "Player 1 Wins!!";
           }
           else if(gameGrid[1][0] == "O" && gameGrid[1][1] == "O" && gameGrid[1][2] == "O") // works
           {
               gameOn = false;
        cout << "GAME OVER \n";
        cout << "Player 2 Wins!!";
           }
        }
    }
    if (gameGrid[0][2] != "*" && gameGrid[1][1] != "*" && gameGrid[2][0]!= "*") //checks top right to bottom left diagonal
    {
       if(gameGrid[0][2]==gameGrid[1][1] && gameGrid[1][1]==gameGrid[2][0])
       {
           if (gameGrid[0][2] == "x" && gameGrid[1][1] == "x" && gameGrid[2][0] == "x") //works
           {
               gameOn = false;
        cout << "GAME OVER \n";
        cout << "Player 1 Wins!!";
           }
           else if(gameGrid[0][2] == "O" && gameGrid[1][1] == "O" && gameGrid[2][0] == "O") // works
           {
               gameOn = false;
        cout << "GAME OVER \n";
        cout << "Player 2 Wins!!";
           }
        }
    }
        
        }

void gameTie ()
{
    if (gameGrid [0][0] != "*" && gameGrid [0][1] != "*" && gameGrid [0][2] != "*" && gameGrid [1][0] != "*" && gameGrid [1][1] != "*"
    && gameGrid [1][2] != "*" && gameGrid [2][0] != "*" && gameGrid [2][1] != "*" && gameGrid [2][2] != "*")
    {
        gameOn = false;
        cout << "TIE GAME. \n";
        cout << "Rerun the program and play again.";
    }
}
        

int main()
            
{
        cout << "Let's play Tic-Tac-Toe! \n";
        cout << "Here is the game board: \n";
        showBoard (NUM_ROWS, NUM_COLUMNS);
        int playerRowX;
        int playerColumnX ;
        int playerRowO ;
        int playerColumnO ;

       while(gameOn)
        {
                cout << "Player 1: Please enter the row number of the space you would like to place your marker, 'X' : \n ";
            cin >> playerRowX;
           playerRowX = playerRowX - 1;
                cout << "Player 1: Please enter the column number of the space you would like to place your marker, 'X': \n ";
            cin >> playerColumnX;
           playerColumnX = playerColumnX - 1;
                fillBoardX (playerRowX,playerColumnX);
           gameCheck ();
           gameTie ();
                  if (gameOn)
           {
                cout << "Player 2: Please enter the row number of the space you would like to place your marker, 'O': \n ";
            cin >> playerRowO;
                      playerRowO = playerRowO - 1;
                cout << "Player 2: Please enter the column number of the space you would like to place your marker, 'O': \n ";
            cin >> playerColumnO;
                      playerColumnO = playerColumnO - 1;
                fillBoardO (playerRowO,playerColumnO);
           gameCheck ();
                      gameTie ();
           }
               
            }
}
            

