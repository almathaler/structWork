#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "headers.h"

int main(){
  //example
  printf("making 3 example nameAges: \n");
  struct nameAge na1;
  na1 = example(7357535);
  struct nameAge na2;
  na2 = example(8234513);
  struct nameAge na3;
  na3 = example(4745723);

  //printing them out
  printf("na1: \t");
  printStruct(na1);
  printf("na2: \t");
  printStruct(na2);
  printf("na3: \t");
  printStruct(na3);

  //modifying the values
  printf("now modifying the values of na1 to be 'alma' and '17' \n");
  char *s = "alma\0";
  modifyStruct(&na1, s, 17);
  printf("na1 now: \t");
  printStruct(na1);
  printf("modifying na2 to say 'jonathan' '13'\n");
  char *s2 = "jonathan\0";
  modifyStruct(&na2, s2, 13);
  printf("na2 now: \t");
  printStruct(na2);
  return 0;
}
