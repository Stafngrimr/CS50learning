/*

  WHAT'S IN YOUR PACK ADVENTURER?
  -- by Stafngrimr

  A small program to list the contents of an adventurer's pack and then ask if the
  user would like to add anything to the pack or keep listing it's contents. Only exits
  when prompted.

  :ideas:
  -Could add a feature where you actually pick from a pool of random objects to add
  -first 3 items are picked randomly from list of 30 each time
  -A Go forwards feature? Then items are randomly come across

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int choose();
// TODO: Turn listing of pack contents into it's own function
// TODO: Turn adding to pack into it's own function


char *item1 = "One hunk of Alterac Swiss";
char *item2 = "Two Mana potions";
char *item3 = "A Vanklet's studded belt";
int choice;

// TODO : Don't forget to take this random comment out

int main(void)
{
  // Intro speech & contents of pack
  printf("\n");
  printf(" You are an adventurer with a pack on your back, ready to explore the world!\n");
  printf("\n");
  printf(" So far in your pack you have:\n");
  printf("  %s, %s, and %s.\n\n", item1, item2, item3);

  // Loop for Questions & Answers
  do
  {
    choice = choose();

    if (choice == 1)
    {
      printf("\n");
      printf(" You're relisting what's in your pack!\n");
      printf("\n");
      // Eventually just : packContents()
    }

    else if (choice == 2)
    {
      printf("\n");
      printf(" You're going to add to your pack!\n");
      printf("\n");
      // Eventually just : addContents()
    }

    else
    {
      printf("\n");
      printf("Well, okay then. See ya later amigo.\n");
      printf("\n");
      return 0;
    }
  }
  while (choice != 0);
}

// Game asks player what to do next and gives 3 options, returns int
// BUG: Anything but an integer causes infinite loop of Stupid string
int choose()
{
  printf(" What would you like to do next?\n");
  printf("   1 - Check the contents of your pack\n");
  printf("   2 - Add a found item to your pack\n");
  printf("   3 - Quit the game\n\n");

  int *path = malloc(sizeof(int));

  do
  {
    scanf("%i", path);

    if ((*path == 1) || (*path == 2) || (*path == 3))
    {
      return *path;
      free(path);
    }

    else
    {
      printf("\n");
      printf(" What are you, stupid? Just a 1 or a 2 or a 3 will do..\n");
    }
  }
  while (*path != 1 || *path != 2 || *path !=3);
}
