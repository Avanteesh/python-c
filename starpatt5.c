#include <stdio.h>

int main()  {


    int row;

    int u, v;    // variables for our for loop
 
      printf("Enter no of rows: ");
      scanf("%d", &row);


     //] paralleogram pattern

       for (u = 1; u <= row; u++ ) { // the outer for loop decides the number rows 
            for (v = 1; v < row+2+u; v++)  {  // the inner for loop decides the coloumns
               if (u == v || u > v)  {  
                     printf(" ");
                }
               else {
                     printf(" *");
                 }
             }
            printf("\n");
       }
       printf("\n");



    return 0;



 }
