/**************************************************************
 * The main file where all exciting stuff the user does       *
 * happens, AND the compiler is here too!.                    *
 * (c) 2021 DamieFC under the MIT license                     *
 **************************************************************/

#include <stdio.h>
#include <string.h>

void dfclang_compiler(char usage[], char file[]) {
  if(!usage && !file) {
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
    if(strcmp(usage[0], "run") == 0) {
      file = fopen(file[0], "r");
      code = fread(file);
      while(code != "EOF"){
        if(code == "//") {
          while(code != "\n") {
            code = code++;
          }
        }
        if(code == "/*") {
          while(code != "*/") {
            code == code++;
          }
        }
      }
    }
  }
}
