/**************************************************************
 * The main file where all exciting stuff the user does       *
 * happens, AND the compiler is here too!.                    *
 * (c) 2021 DamieFC under the MIT license                     *
 **************************************************************/

#include "modules/modules.h"

void dfclang-compiler(char usage[], char file[]){
  if(!usage){
    printf("ERROR: NO USAGE\n");
    return 1;
  }
  else if(strcmp(usage, "help") == 0){
    printf("The dfclang compiler is used using ./dfclang run <filename>.\n"); // Need to work on
    printf("All options: \n");
    printf("\
           help\n\
           run\n\
           "); // lets see if this works :\
  }
  /************************************************************
   * THE COMPILER ITSELF!!!! Sorry nothing really yet :(      *
   ************************************************************/
  else if(strcmp(usage[], "run") == 0){
      
  }
}
