#include <stdio.h>

char enc[25] = {82, 89, 87, 80, 67, 64, 10, 78, 99, 94, 10, 81, 31, 51, 113, 119, 32, 26, 36, 118, 38, 125, 56, 50, 49};

void main() {
   for (int i = 0; i < 25; i++) 
       enc[i] = enc[i] ^ (0x34 + i);
}