#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
  int return_value=0;

  return_value=fork();

  println("return value: %d\n", return_value);

  printf("getpid(): %d\n", getpid());

  return 0;
}
