/*

  WHAT'S IN YOUR PACK ADVENTURER?
  -- by Stafngrimr

  A small program to list the contents of an adventurer's pack and then ask if the
  user would like to add anything to the pack or keep listing it's contents. Only exits
  when prompted.

  :IDEAS:
  -Could add a feature where you actually pick from a pool of random objects to add
  -first 3 items are picked randomly from list of 30 each time
  -A Go forwards feature? Then items are randomly come across and you choose whether
  or not to add them to your pack.

*/

// Include relevant libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Prototyping functions & global variables
int choose();
void packContents();
void questions();
// TODO: Turn adding to pack into a function

char *item1 = "One hunk of Alterac Swiss";
char *item2 = "Two Mana potions";
char *item3 = "A Vanklet's studded belt";
int choice = 0;


int main(void)
{
  // Intro
  printf("\n");
  printf(" You are an adventurer with a pack on your back, ready to explore the world!\n");
  questions();

  // Loop answers until exit
  do
  {
    scanf("%i", &choice);

    // 1 - Check the contents of your pack
    if (choice == 1)
    {
      packContents();
      printf("\n");
    }

    // 2 - Add a found item to your pack
    else if (choice == 2)
    {
      printf("\n");
      printf(" You'd like to add to your pack.. WELL YOU CAN'T!!\n");
      printf("\n");
      // TODO: Eventually just addContents()
    }

    // 3 - What are the questions again?
    else if (choice == 3)
    {
      questions();
      printf("\n");
    }

    // 4 - Quit the game
    else if (choice == 4)
    {
      printf("\n");
      printf("Well, okay then. See ya later amigo.\n");
      printf("\n");
      return 0;
    }

    else
    {
      printf("\n");
      printf("That's not one of the options dumb-dumb. You lose.\n");
      printf("\n");
      return 1;
    }
  }

  while (choice != 1 || choice != 2 || choice !=3 || choice !=4);
}

// Function: listing of the current pack contents
void packContents()
{
  printf("\n");
  printf(" So far in your pack you have:\n");
  printf("  %s, %s, and %s.\n", item1, item2, item3);
}

// Function: Listing of the questions
void questions()
{
  printf("\n");
  printf(" What would you like to do next?\n");
  printf("   1 - Check the contents of your pack\n");
  printf("   2 - Add a found item to your pack\n");
  printf("   3 - What are the questions again?\n");
  printf("   4 - Quit the game\n\n");
}
