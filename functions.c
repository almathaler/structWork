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

char* randName(int i, char *p){
  srand(i);
  //printf("testing to see if working, 3 rand nums: %d, %d, %d\n", rand(), rand(), rand());
  //making the letters
  char consonants[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
                        'm', 'n','p','q','r','s','t','v','w','x','y','z'};
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  char name[4];
  name[3] = '\0'; //end in null
  //will give like 'tod', 'dod', dad, xud etc
  int f;
  for (f = 0; f<3; f++){
    if (f%2 == 0){
      int y = rand();
      //printf("Y: %d\n", y);
      y = y%21;
      //printf("y modded: %d\n", y);
      name[f] = consonants[y];
    }else{
      //aka, name[1] should be a vowel
      int x = rand();
      //printf("x: %d\n", x);
      x = x%5; //num between 0 and 4
      //printf("x modded: %d\n", x);
      name[f] = vowels[x];
    }
  }
  printf("name looks like: [%c, %c, %c]\n", name[0], name[1], name[2]);
  p = name;
  return p;
}

struct nameAge example(int i, char *p){
  char *nameA = randName(i, p);
  int z = randAge(i);
  //putting both pieces into struct
  struct nameAge returnS;
  returnS.n = nameA;
  returnS.a = z;
  return returnS;
}

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

int modifyStruct(struct nameAge *param, char *newName, int newAge){
  (*param).n = newName;
  (*param).a = newAge;
  return 0;
}
