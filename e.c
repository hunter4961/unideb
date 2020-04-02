#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_KULCS 100
#define BUFFER_MERET 256

int main(int argc, char **argv){
  char kulcs[MAX_KULCS];
  char buffer[BUFFER_MERET];

  int index = 0;
  int olvasott = 0;

  int meret = strlen(argv[1]);
  strncpy(kulcs, argv[1], MAX_KULCS);

  while((olvasott = read(0, (void *) buffer, BUFFER_MERET))){
    for(int i = 0; i < olvasott; ++i){
      buffer[i] = buffer[i] ^ kulcs[index];
      index = (index + 1) % meret;
    }
    write(1, buffer, olvasott);
  }
}
