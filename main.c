/*
 * Tristan Hilbert
 * 6/10/2018
 * Main Function Testing
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "tree/binary_tree.h"

int main(int argc, char * argv[]){
   FILE * text_input;
   int i;
   struct bin_tree a;

   if(!argv[1]){
      printf("Needed Arguments:\n\tText File \".txt\"\n");
      return 1;
   }else{

      init_tree(&a);
      text_input = fopen(argv[1], "r");
      while((fscanf(text_input, "%i", &i)) != EOF){
         add_tree(&a, i);
	 printf("adding %d\n", i);
      }
      printf("\n\n");
      fclose(text_input);
      print_tree(&a);
      del_tree(&a);
   }
   return 0;
}