#include <stdio.h>

int main(int argc, char *argv[])
{
  int ages[] = {23, 40, 50, 60, 70};
  char *names[] = {
    "Alan", "Frank",
    "Mary", "John", "Lisa"
  };

  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n",
        names[i], ages[i]);
  }

  printf("---\n");

  int *cur_age = ages;
  char **cur_name = names;

  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n",
      *(cur_name+i), *(cur_age+i));
  }

  return 0;
}
