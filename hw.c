#include <stdlib.h>

int main() {
    while (1) {
       printf("\e[31mhello world");
       printf("\e[32mhello world");
       printf("\e[33mhello world");
       printf("\e[34mhello world");
       printf("\e[35mhello world");
       printf("\e[36mhello world");
       printf("\e[37mhello world");
       printf("\e[38;5;208mmhello world");
    }
    return 0;
}
