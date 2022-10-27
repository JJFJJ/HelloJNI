#include <stdio.h>

#ifndef __HELLO_H__
#define __HELLO_H__

#ifdef __cplusplus
extern "C"  {
#endif

void say_hello();
void print_value(int a);

int add(int a, int b);

#ifdef __cplusplus
}
#endif

#endif // __HELLO_H__