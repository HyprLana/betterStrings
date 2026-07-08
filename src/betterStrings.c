#include "betterStrings.h"

string newString(const char* temp) {
  string bString = malloc(strlen(temp) + 4);

  *bString = (uint32_t)strlen(temp) + 1;

  bString += 4;

  strcpy(bString, temp);

  return bString;
}

void stringFree(string bString) {
  bString -= 4;

  free(bString);
}

uint32_t getStringSize(string bString) {
  uint32_t temp;

  bString -= 4;

  temp = *(uint32_t*)bString;

  return temp;
}

void setString(string* tString, const char* temp) {

  void* pointer;

  string bString = *tString;

  bString -= 4;
  
  uint32_t length = (uint32_t)strlen(temp) + 1;

  if(*(uint32_t*)bString < length) {

    pointer = realloc(bString, length + 4);

    if(pointer != NULL) {
      bString = pointer;
      *(uint32_t*)bString = length;
      bString += 4;
    } else {
      printf("Your string ran into a problem!");
      return;
    }

  } else {
    bString += 4;
  }

  *tString = bString;
  strcpy(*tString, temp);
}
