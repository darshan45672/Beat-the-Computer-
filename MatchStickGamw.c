/* TRY TO BEAT THE COMPUTER */

#include<stdio.h>
#include<stdlib.h>
int main(void) {
int m = 21, p, c;
printf("\n\t\tRules: you pick 1 or 2 or 3 or 4 matchsticks at a time!!!\n\n\n\n");

while (1) {
    printf("\nNumber of Match sticks left = %d\n", m);
    printf("Pick 1 or 2 or 3 or 4 matches\n");
    scanf("%d", &p);

    if (p > 4 || p < 1){
        printf("follow the rules\n");
        continue;
    }
    m = m - p;

    printf("Number of matches left = %d\n", m);

    c = 5 - p;

    printf("out of which computer picked up %d\n", c);

    m = m - c;

    if (m == 1) {
      printf("\nNumber of matches left = %d\n", m);
      printf("You lost the Game\n");
      break;
    }
  }

  return 0;
}