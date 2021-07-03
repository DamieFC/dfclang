/**************************************************************
 * The main file where all exciting stuff the user does       *
 * happens, AND the compiler is here too!.                    *
 * (c) 2021 DamieFC under the MIT license                     *
 **************************************************************/

#include <stdio.h>
#include <string.h>

void dfclang_compiler(char usage[], char file[]) {
  if(usage[1] == "\0") {
    printf("Error: no options or anything at all\n");
    return 1;
  } else if(strcmp(usage[1], "help") == 0) {
    printf("The dfclang compiler is used using ./dfclang run <filename>.\n"); // Need to work on
    printf("All options: \n");
    printf("\
           help\n\
           run\n\
           "); // lets see if this works :\
  //************************************************************
  //* THE COMPILER ITSELF!!!! Sorry nothing really yet :(      *
  //************************************************************
  } else{
    if(strcmp(usage[1], "run") == 0) {
      code = fopen(file[1], "r");
      while(code != "EOF"){
        if(code == "//") {
          while(code != "\n") {
            code = code++
          }
        }
      }
    }
  }
}
