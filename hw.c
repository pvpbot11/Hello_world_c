#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
       printf("hello world\n");
    }
    if (argc > 1) {
       if (strcmp(argv[1], "-r") == 0) {
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
       }
       if (strcmp(argv[1], "-o") == 0) {
          while (1) {
             printf("\e[36mhello world\n");
             printf("\e[37mhello world\n");
          }
       }
       if (strcmp(argv[1], "--help" ) == 0) {
          printf("\e[34mCopyright (c) Eleven 2026\n");
          printf("\e[37m");
          printf("use the file by doing ./hw ...\n");
          printf("./hw = just a classic hello world\n");
          printf("./hw -r = rainbow mode\n");
          printf("./hw -o = original mode (cyan and white)\n");
          printf("./hw --help = help menu\n");
          printf("./hw -c (red, cyan, yellow, orange, blue, purple\n");
          printf("you can move this file to your bin folder\n");
          printf("so you can just type hw or hw -r to run it\n");
          printf("from anywhere as a command\n");
          printf("\e[32myou can use ctrl+c to stop\n");
       }
       if (strcmp(argv[1], "-c") == 0) {
          if (strcmp(argv[2], "red") == 0) {
             printf("\e[31mhello world\n");
          }
          if (strcmp(argv[2], "green") == 0) {
             printf("\e[32mhello world\n");
          }
          if (strcmp(argv[2], "cyan") == 0) {
             printf("\e[36mhello world\n");
          }
          if (strcmp(argv[2], "orange") == 0) {
             printf("\e[38;5;208mhello world\n");
          }
          if (strcmp(argv[2], "purple") == 0) {
             printf("\e[35mhello world\n");
          }
          if (strcmp(argv[2], "blue") == 0) {
             printf("\e[34mhello world\n");
          }
          if (strcmp(argv[2], "yellow") == 0) {
             printf("\e[33mhello world\n");
          }
        }
    }
    return 0;
} 
