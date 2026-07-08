#ifndef BETTER_C_STRINGS
#define BETTER_C_STRINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef char* string;

string newString(const char* temp);

void setString(string* tString, const char* temp);

uint32_t getStringSize(string bString);

void stringFree(string bString);

#endif
