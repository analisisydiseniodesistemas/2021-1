/** prog00.c */
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
  int N;
  N=atoi(argv[1]);
  printf("%s, %d\n",argv[0],N);
  return argc;
}

