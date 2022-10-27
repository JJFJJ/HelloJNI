#include "hello.h"

void say_hello()
{
    printf("[%s %s line: %d] Hello JNI\n", __FILE__, __FUNCTION__, __LINE__);
}

void print_value(int a)
{
    printf("[%s %s line: %d] %d\n", __FILE__, __FUNCTION__, __LINE__, a);
}

int add(int a, int b)
{
    return (a + b);
}