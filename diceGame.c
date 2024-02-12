// Die generater with random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printDie(int num)  {
  
    switch(num)  {
        
          case 1:
              printf(" _______\n");
              printf("|       |\n");
              printf("|   *   |\n");
              printf("|_______|\n");
              break;
              
          case 2:
              printf("_________\n");
              printf("|        |\n");
              printf("| *      |\n");
              printf("|      * |\n");
              printf("|________|\n");
              break;
              
          case 3:
              printf("___________\n");
              printf("|          |\n");
              printf("| *        |\n");
              printf("|    *     |\n");
              printf("|       *  |\n");
              printf("|__________|\n");
              break;
              
          case 4:
              printf("___________\n");
              printf("|          |\n");
              printf("|  *    *  |\n");
              printf("|          |\n");
              printf("|  *    *  |\n");
              printf("|__________|\n");
              break;
              
          case 5:
              printf("____________\n");
              printf("|           |\n");
              printf("| *       * |\n");
              printf("|     *     |\n");
              printf("| *       * |\n");
              printf("|___________|\n");
              break;
              
          case 6:
              printf("_____________\n");
              printf("|            |\n");
              printf("|  *   *   * |\n");
              printf("|            |\n");
              printf("|  *   *   * |\n");
              printf("|____________|\n");
              break;
              
          default:
              printf("____________\n");
              printf("|           |\n");
              printf("|  @     @  |\n");
              printf("|     ^     |\n");
              printf("|  _______  |\n");
              printf("|___________|\n");
    
       }


}


int main(void)  {

      srand(time(NULL));
      
      int die_number = ((rand()) % 6)+1;
      
      printf("Number: %d \n", die_number);
      printDie(die_number);

      return 0;

}
