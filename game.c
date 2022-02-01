#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  char *item1 = "Some rations";
  char *item2 = "A mana potion";
  char *item3 = "A Vanklet's belt";

  printf("\nYou are an adventurer with a pack on your back, ready to explore the world!\n\n");

  printf("So far in your pack you have:\n");
  printf("%s, %s, %s.\n\n", item1, item2, item3);
  printf("What would you like to do next?\n\n");
  printf("1 - Add something to your pack\n");
  printf("2 - Check the contents of your pack\n");
  printf("3 - Quit the game\n\n");



}
