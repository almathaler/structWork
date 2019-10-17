#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "headers.h"

int randAge(int i){
  srand(i);
  int age = rand();
  age = age%100;
  return age;
}
//this must be pointer
int randName(int i, struct nameAge *param){
  srand(i);
  //printf("testing to see if working, 3 rand nums: %d, %d, %d\n", rand(), rand(), rand());
  //making the letters
  char consonants[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
                        'm', 'n','p','q','r','s','t','v','w','x','y','z'};
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  int f;
  for (f = 0; f<3; f++){
    if (f%2 == 0){
      int y = rand();
      //printf("Y: %d\n", y);
      y = y%21;
      //printf("y modded: %d\n", y);
      (*param).n[f] = consonants[y];
    }else{
      //aka, name[1] should be a vowel
      int x = rand();
      //printf("x: %d\n", x);
      x = x%5; //num between 0 and 4
      //printf("x modded: %d\n", x);
      (*param).n[f] = vowels[x];
    }
  }
  (*param).n[f] = '\0';
  return 0;
}

struct nameAge example(int i){
  int z = randAge(i);
  //putting both pieces into struct
  struct nameAge returnS;
  randName(i, &returnS);
  returnS.a = z;
  return returnS;
}
//this can be a copy
int printStruct(struct nameAge param){
  printf("{");
  char *p = param.n;
  while(*p != '\0'){ //the array made in example is null terminated
    printf("%c", *p);
    p++;
  }
  printf(", %d}\n", param.a);
  return 0;
}
//this must be pointer
int modifyStruct(struct nameAge *param, char name[100], int age){
  int f = 0;
  while (name[f] != '\0'){
    (*param).n[f] = name[f];
    f++;
  }
  (*param).a = age;
  return 0;
}
