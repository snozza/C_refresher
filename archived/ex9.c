#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = {0};
  char *another = "Zed";

  printf("numbers: %d %d %d %d\n",
          numbers[0], numbers[1],
          numbers[2], numbers[3]);

  printf("name: %c %c %c %c.\n",
          another[0], another[1],
          another[2], another[3]);

  return 0;
}
