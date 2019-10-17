#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "headers.h"

int main(){
  //example
  printf("making 3 example nameAges, note the names are 3 letter random words\nof the form consonant-vowel-consonant and age is between 0-100: \n");
  struct nameAge na1;
  na1 = example(time(NULL));
  struct nameAge na2;
  na2 = example(time(NULL)+12);
  struct nameAge na3;
  na3 = example(time(NULL)+7);

  //printing them out
  printf("na1: \t");
  printStruct(na1);
  printf("na2: \t");
  printStruct(na2);
  printf("na3: \t");
  printStruct(na3);

  //modifying the values
  printf("now modifying the values of na1 to be 'alma' and '17' \n");
  char s[5] = {'a', 'l', 'm', 'a', '\0'};
  modifyStruct(&na1, s, 17);
  printf("na1 now: \t");
  printStruct(na1);
  printf("modifying na2 to say 'jonathan' '13'\n");
  char s2[9] = {'j', 'o', 'n', 'a', 't', 'h', 'a', 'n', '\0'};
  modifyStruct(&na2, s2, 13);
  printf("na2 now: \t");
  printStruct(na2);
  return 0;
}
