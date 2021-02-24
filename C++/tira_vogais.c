#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    
    char string [100];
    int i, tam;
    
    printf ("* Digite a string *\n");
    gets (string);
    tam = strlen (string);
    for (i = 0; i<tam; i++){
          if (string [i] == 'a' || string [i] == 'e' || string [i] == 'i' || string [i] == 'o' || string [i] == 'u')
                string [i] = ' ';
    }
    puts (string);
    system ("PAUSE");
}

