#include <string.h>
#include <assert.h>
#include "../regression.h"

int main() {
  const char* test="blubber";
  assert(memcmp(test,"blubber",8)==0);
  assert(memcmp(test,"fnord",5)<0);
  assert(memcmp(test,0,0)==0);
  return TEST_OK;
}
