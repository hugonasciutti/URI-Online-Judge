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
int N = 0; // Number of child inserted by the user
int well_behaved = 0;
int misbehaved = 0;

int
main() {
  // The first value N (0 ≤ N ≤ 100)
  childList i; // This is my structure, here i'm going to insert my child data.
  childList *l; // This is my structure pointer, this is where i'm going to walk in memory through increment later on the code, e.g.: l[position++].
  int j = 0;

  scanf("%d", &N); // Ask the number of child

  while (N < 0 || N > 100) {
    scanf("%d", &N); // Keep asking the number until meet the criteria
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
    i.name = (char *) malloc (MAXNOME * sizeof(char));
    scanf ("%c %s", &i.behavior, i.name);
    while((unsigned)strlen(i.name) > MAXNOME) {
      scanf ("%s", i.name);
    }
    insert (l, i); // Walking through memory by this function filling the allocation with i;
  }

  // In showAll it will sort and print in Alphabetical order
  showAll(l, i);

  return 0;
}

childList *
create(int N)
{
  childList *l;
  l = (childList *) malloc(N * sizeof(childList));
  return l;
}

int
insert(childList *l, childList i)
{
  if (position == N) {
    return -1;
  }

  if (i.behavior == '+') {
    well_behaved++;
  } else {
    misbehaved++;
  }

  l[position++] = i;
  return position;
}

void showAll(childList *l, childList i) {
  int j, k, check;
  char * strTemp;
  strTemp = malloc(MAXNOME * sizeof(char) + 1);
  for (j = 0; j < N; j++) {
    for (k = 0; k < N; k++) {
      check = strcmp(l[j].name, l[k].name);
      if (check<0) {
        strcpy(strTemp, l[j].name);
        strcpy(l[j].name, l[k].name);
        strcpy(l[k].name, strTemp);
      }
    }
  }
  for (j = 0; j < N; j++) {
    printf("%s\n", l[j].name);
  }

  printf("Se comportaram: %d | Nao se comportaram: %d\n", well_behaved, misbehaved);
}
