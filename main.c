#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "headers.h"

int main(){
  printf("making a 3 example nameAges: \n");

  struct nameAge na1;
  struct nameAge na2;
  struct nameAge na3;
  printf("na1: \t");
  printStruct(na1);
  printf("na2: \t");
  printStruct(na2);
  printf("na3: \t");
  printStruct(na3);

  return 0;
}
