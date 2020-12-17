#include <stdio.h>

int main(void) 
{
  int b, h, x, y;
  printf("Dieses Programm zeichnet ein Rechteck aus Sternen\n\n");
  printf("Bitte Breite eingeben: ");
  scanf("%d", &b);
  printf("Bitte Höhe eingeben: ");
  scanf("%d", &h);
  for(y=1; y<=h; y++) // "gelbe" Schleife = äußere Schleife
  {
    for(x=1; x<=b; x++) // "blaue" Schleife = innere Schleife
      printf("*");
    printf("\n");
  }
  return 0;
}