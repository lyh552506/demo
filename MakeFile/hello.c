#include "hello.h"

#include <stdio.h>

#include "add.h"
// #include "hello_fake.h"

int main() {
  int a;
  a=0;
  printf("%s\n", SAY_HELLO);
  printf(
      "struct memory member a's offset is %zu, b's offset is %zu,c's offset is "
      "%zu\n",
      offsetof(struct memory, a), offsetof(struct memory, b),
      offsetof(struct memory, c));
  printf("233 + 267 = %d\n", add(233, 267));
  return a;
}
