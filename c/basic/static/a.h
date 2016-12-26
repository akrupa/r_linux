#ifndef A_H
#define A_H

// it not good idea using declaration of static like this
static int zm=0;
// every where this header will be include
// than created another instances of zm

void set(int zm);
int get();
#endif

