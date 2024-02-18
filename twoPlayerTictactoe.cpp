
// two player tic tac toe game  created by Avanteesh @Feb 18 2024
/* Git Hub archived */

#include <iostream>
#include <cstdio>

#define playerA 'X'
#define playerB 'O'

using namespace std;

char Board[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
int scoreA = 0;
int scoreB = 0;
 
void printBoard()
{
      cout << endl;
      
      cout <<"               |                |                 "<< endl;
      cout <<"               |                |                 "<< endl;
      cout <<"               |                |                 "<< endl;
       printf("     %c         |       %c        |        %c       \n",Board[0][0],Board[0][1],Board[0][2]);
      cout <<"               |                |                 " << endl;
      cout <<"               |                |                 " << endl;
      cout <<"_______________|________________|_________________" << endl;
      cout <<"               |                |                 " << endl;
      cout <<"               |                |                 " << endl;
       printf("     %c         |       %c        |        %c       \n", Board[1][0],Board[1][1],Board[1][2]);
      cout << "               |                |                 " << endl;
      cout <<"               |                |                 " << endl;
      cout <<"_______________|________________|________________" << endl;
      cout <<"               |                |                 " << endl;
      cout <<"               |                |                 " << endl;
      cout <<"               |                |                 " << endl;
      printf("      %c        |      %c         |       %c         \n",Board[2][0],Board[2][1],Board[2][2]);
      cout <<"               |                |                  " << endl;
      cout <<"               |                |                  " << endl;
      cout <<"               |                |                  " << endl;
      
      cout << endl;


} 
   
   
void Update_Board(int position, char value)
{
        switch(position)  {
              
              case 1:
                  if (Board[0][0] == ' ') 
                  {
                      Board[0][0] = value;
                  }
                  break;
                  
              case 2:
                  if (Board[0][1] == ' ')
                  {
                      Board[0][1] = value;
                  }
                  break;
                  
              case 3:
                  if (Board[0][2] == ' ')
                  {
                      Board[0][2] = value;
                  }
                  break;
              case 4:
                  if (Board[1][0] == ' ')
                  {
                      Board[1][0] = value;
                  }
                  break;
                  
              case 5:
                  if (Board[1][1] == ' ')
                  {
                      Board[1][1] = value;
                  }
                  break;
                  
              case 6:
                  if (Board[1][2] == ' ')
                  {
                      Board[1][2] = value;
                  }
                  break;
                  
              case 7:
                  if (Board[2][0] == ' ')
                  {
                    Board[2][0] = value;
                  }
                  break;
                  
              case 8:
                  if (Board[2][1] == ' ')
                  {
                    Board[2][1] = value;
                  }
                  break;
                  
              case 9:
                  if (Board[2][2] == ' ')
                  {
                      Board[2][2] = value;
                  }
                  break;
                  
              default:
                  cout << "Can Only put values from 1 to 9 " << endl;
        }
}

bool Winning_status(char value1);



int main(void)
{
        int position1;
        int position2;
        int game_count = 0;
        
        cout << endl;
        cout << "\t\tWelcome to Tic-Tac-Toe game" << endl; 
        cout << endl;
        cout << endl;
        
        printBoard();
        cout << endl;
        
        while (game_count < 3)
        {
            cout << endl;
            cout << "Player 'A' Where would you like to aim? \n" <<  "Your input: ";
            cin >> position1;
            Update_Board(position1, playerA);
            cout << endl;
            printBoard();
            
            cout << endl;
            cout << "Now Player 'B' Where would you like to aim? \n" << "Your input: ";
            cin >> position2;
            Update_Board(position2, playerB);
            
            cout << endl;
            printBoard();
            
            if (Winning_status(playerA) == 1)
            {
                scoreA = scoreA + 1;
                break;
            }
            else if (Winning_status(playerB) == 1){
                scoreB = scoreB + 1;
                break;
            }
            else {
                continue;
            }    
            game_count++;
        }
        
        if (scoreA > scoreB)
        {
            cout << "Player A won the game!! " << endl;
        }
        else if (scoreB > scoreA)
        {
            cout << "Player B won the game!! " << endl;   
        }
        else
        {
            cout << "Draw? " << endl;
        }
        

  
        return 0;

}

bool Winning_status(char value1)
{     
      // row wise condition
      bool condition_1 = (Board[0][0] == value1 && Board[0][1] == value1 && Board[0][2] == value1);
      bool condition_2 = (Board[1][0] == value1 && Board[1][1] == value1 && Board[1][2] == value1);
      bool condition_3 = (Board[2][0] == value1 && Board[2][1] == value1 && Board[2][2] == value1);
      
      // column wise condition
      bool condition_4 = (Board[0][0] == value1 && Board[1][0] == value1 && Board[2][0] == value1);
      bool condition_5 = (Board[0][1] == value1 && Board[1][1] == value1 && Board[2][1] == value1);
      bool condition_6 = (Board[0][2] == value1 && Board[1][2] == value1 && Board[2][2] == value1);
      
      // diagonal condition
      bool condition_7 = (Board[0][0] == value1 && Board[1][1] == value1 && Board[2][2] == value1);
      bool condition_8 = (Board[0][2] == value1 && Board[1][1] == value1 && Board[2][0] == value1);
      
      if ((condition_1 || condition_2 || condition_3))
      {
            return 1;
      }
      else if ((condition_4 || condition_5 || condition_6))
      {
            return 1;
      }
      else if ((condition_7 || condition_8))
      {
            return 1;
      }
      else {
            return 0;
      }

}
