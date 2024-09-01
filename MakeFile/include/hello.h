#ifndef _HELLO_
#define _HELLO_

#ifndef SAY_HELLO
#define SAY_HELLO "Hello world"
#endif

static const int global = 10;

#ifndef OFFSET_OF
#define offsetof(type, member) ((size_t) & ((type *)0)->member)
#endif

struct memory {
  const int a;
  const char b;
  const double c;
};

#endif