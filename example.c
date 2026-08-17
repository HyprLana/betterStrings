#include "src/betterStrings.h"
#include <string.h>

// this is an example of the uses and compatabilities of the library

int main() {

  string test = newString("test string");

  printf("%s it is %zu long\n", test, strlen(test));

  setString(&test, "the string got bigger than it was and can store more");

  printf("%s it is now %zu long", test, strlen(test));

  return 0;
}
