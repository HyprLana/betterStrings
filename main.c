#include "src/betterStrings.h"
#include <string.h>

// this is an example of the uses and compatabilities of the library

int main() {

  string test = newString("sigma");

  printf("%s si %zu\n", test, strlen(test));

  setString(&test, "lkjelkjlkejlksjflkjflksjflkdjf");

  printf("%s si %zu", test, strlen(test));

  return 0;
}
