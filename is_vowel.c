// Program checks whether each letter of a word is a vowel or not

#include <stdio.h>

/* ---------------- 
/ To run:
/ $ make is_vowel
/ $ ./is_vowel word
*/ ----------------

int main(int argc, char *argv[])
{
  if(argc != 2) {
    printf("ERROR: You need one argument.\n");
    return 1;
  }

  for(int i = 0; argv[1][i] != '\0'; i++) {
  char letter = argv[1][i];

  switch(letter) {
    case 'a':
    case 'A':
      printf("Letter %d: 'a' is a vowel\n", i+1);
      break;
    case 'e':
    case 'E':
      printf("Letter %d: 'a' is a vowel\n", i+1);
      break;
    case 'i':
    case 'I':
      printf("Letter %d: 'i' is a vowel\n", i+1);
      break;
    case 'o':
    case 'O':
      printf("Letter %d: 'o' is a vowel\n", i+1);
      break;
    case 'u':
    case 'U':
      printf("Letter %d: 'u' is a vowel\n", i+1);
      break;
    case 'y':
    case 'Y':
      printf("Letter %d: 'y' is a vowel\n", i+1);
      break;
    default:
      printf("Letter %d: '%c' is not a vowel\n", i+1, letter);
    }
  }
return 0;
}
