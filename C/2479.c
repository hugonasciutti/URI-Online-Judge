#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct child
{
  char behavior;
  char * name;
};

typedef struct child childList;

// ===== Prototypes =====
childList * create(int);
int insert(childList *l, childList i);
void showAll(childList *l, childList i);
//=======================

int const MAXNOME = 20;
int position = 0; // Position of the list, this const is incremented whenever a child is inserted in my list by the function insert
int N = 0; // Number of child

int
main() {
  // The first value N (0 ≤ N ≤ 100)
  childList i; // This is my structure, here i'm going to insert my child data.
  childList *l; // This is my structure pointer, this is where i'm going to walk in memory through increment later on the code, e.g.: l[position++].

  int j = 0;

  while(N <= 0 || N > 100) {
    scanf("%d", &N); // Ask the number of child
  }

  l = create(N); // Allocate a space in memory according to the number of childs in the list
  if (l == NULL) // Verify the attempt of memory allocation has ocurred successfully, if not, ends the program
     return -1;

  // Get behavior and name of the child list
  // + indicates well behaved
  // - indicates misbehaved
  // Name can only have 20 characters at maximum
  for (j = 0; j < N; j++)
  {
    setbuf(stdin, NULL);
    i.name = (char *) malloc (MAXNOME * sizeof(char) + 1);
    scanf ("%c %s", (char *)&i.behavior, i.name);

    insert (l, i); // Walking through memory by this function filling the allocation with i;
  }


  showAll(l, i);

  return 0;
}

childList *
create(int N)
{
  childList *l;
  l = (childList *) malloc(N * sizeof(childList));
}

int
insert(childList *l, childList i)
{
  if (position == N) {
    return -1;
  }

  l[position++] = i;
  return position;
}

void showAll(childList *l, childList i) {
  int j = 0;
  for (j = 0; j < N; j++) {
    printf("%c %s[%d]\n", l[j].behavior, l[j].name, j);
  }
}
