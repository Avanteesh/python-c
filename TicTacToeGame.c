/* Tic Tac Toe Game - Made by Avanteesh @ Feb 16 2024 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

char Board[3][3] = { {' ', ' ', ' '},
                    {' ', ' ', ' '}, 
                    {' ', ' ', ' '}};

// values
const char Player= 'X';
const char Computer = 'O';


void printBoard()  
{
      printf("\n");
      printf("     |      |       \n");
      printf(" %c   |  %c   |  %c   \n", Board[0][0], Board[0][1], Board[0][2]);
      printf("_____|______|______ \n");
      printf("     |      |      \n");
      printf(" %c   |  %c   |  %c  \n", Board[1][0], Board[1][1], Board[1][2]);
      printf("_____|______|_____ \n");
      printf("     |      |      \n");
      printf(" %c   |  %c   |   %c \n", Board[2][0], Board[2][1], Board[2][2]);
      printf("     |      |      \n");
      printf("\n");

}

void Update_Value(int position, char value) 
{
    switch(position)  
    {
    
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
            printf("you can only add in boxes from 1-9 \nTry-Again!");        
    
    }

}

bool Check_Winning_Condition(char item)  {
      
      // row - wise
      bool cond1 = ((Board[0][0] == item) && (Board[0][1] == item) && (Board[0][2] == item));
      bool cond2 = ((Board[1][0] == item) && (Board[1][1] == item) && (Board[1][2] == item));
      bool cond3 = ((Board[2][0] == item) && (Board[2][1] == item) && (Board[2][2] == item));
      
      bool Conditions_row = (cond1 ^ cond2 ^ cond3);   // exclusive condtions should be true

      // column - wise
      bool cond4 = ((Board[0][0] == item) && (Board[1][0] == item) && (Board[2][0] == item));
      bool cond6 = ((Board[0][1] == item) && (Board[1][1] == item) && (Board[2][1] == item));
      bool cond7 = ((Board[0][2] == item) && (Board[1][2] == item) && (Board[2][2] == item));
      
      bool Conditions_col = (cond4 ^ cond6 ^ cond7);
      
      // diagonal conditions
      
      bool cond8 = ((Board[0][0] == item) && (Board[1][1] == item) && (Board[2][2] == item));
      bool cond9 = ((Board[0][2] == item) && (Board[1][1] == item) && (Board[2][0] == item));
      
      bool Conditions_diag = (cond8 || cond9);
      
      if ((Conditions_row || Conditions_col || Conditions_diag))  {
              return 1;
      }
      else {
              return 0;
      }
    
}

bool Winner_Status()  {
    if ((Check_Winning_Condition(Player) == 1) ^ (Check_Winning_Condition(Computer) == 1))  
    {
          return 1;
    }
    else {
          return 0;
    }

}


void Winner_Declare()  
{
    if (Check_Winning_Condition(Player) == 1)  
    {
        printf("\n\t\tCongragulations!! You won!!\n");
    }
    else if (Check_Winning_Condition(Computer) == 1)  
    {
        printf("\n\t\tYou loose! \nBetter Luck next time \n");
    }
    else
    {
        printf("\n\t\tLooks like it was a Draw \n");
    }
}

void Computer_Random_position() 
{
        srand(time(NULL));
        int random_number = ((rand() % 8) + 1);
        Update_Value(random_number, Computer);
}

int main(void)   {
      
      sleep(1);
      printf("\tWELCOME TO THE TIC-TAC-TOE-GAME\n");
      sleep(1);
    
      int position;
      int ITERATER = 0;
      
      printBoard();
      while (Winner_Status() != 1) 
      { 
          sleep(1);
          Computer_Random_position();
        
          sleep(1);
          printf("Enter position: ");
          scanf("%d", &position);
          Update_Value(position, Player);
          sleep(1);
          printBoard();
          Winner_Status();
      }
      sleep(1);
      
      // declare the winner 
      Winner_Declare();
      
    
      return 0;

}

// program end


