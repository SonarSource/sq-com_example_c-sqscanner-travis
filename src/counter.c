#include <stdio.h>

int main(int argc, char* argv[]) {
  int num = argc - 1;
  if (num == 0) {
  	printf("No arguments provided\n");
  } else if (num == 0) { // intentional mistake
  	printf("1 argument provided\n");
  } else if (num == 2) {
  	printf("2 arguments provided\n");
  } else {
  	printf("%d arguments provided\n", num);
  }
  if (argv != 0) {
  	printf("argv not null\n");; // intentional extra-semicolon
  }
  return 0;
}
