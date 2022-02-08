#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *item1 = "Some rations";
  char *item2 = "A mana potion";
  char *item3 = "A Vanklet's belt";
  // Intro speech
  printf("\nYou are an adventurer with a pack on your back, ready to explore the world!\n");
  printf("\n");

  // Initial telling of what's in the pack
  printf("So far in your pack you have:\n");
  printf("%s, %s, %s.\n\n", item1, item2, item3);

  printf("What would you like to do next?  ");
  printf("\n");

  printf("1 - Add something to your pack\n");
  printf("2 - Check the contents of your pack\n");
  printf("3 - Quit the game\n\n");

  choice();


  return 0;
}

// Game asks player what to do next and gives 3 options
int choice()
{
  int path;
  scanf("%i", path);

  if (path == 1)
  {

  }
}

/*
  WHAT GAME SHOULD DO
  Give a prewritten epic intro
  Give a prewritten whats in their pack
  Ask user what to do next & give them 3 options
  1 - Check the contents of your pack.
  2 - Add something you've found to your pack.
  3 - Quit Game.

  User inputs 1, 2, or 3. If else Tell them, no no no and ask again
  If 1 - Reread contents of pack, then ask again
  If 2 - Ask what they want to add, accept input (Letters only, include caps and
      max 20 chars), then ask again
  If 3 - Give prewritten ending to story about horrible death and quit
      (perhaps allude to the fact that this is only the end... of v.1)
*/
