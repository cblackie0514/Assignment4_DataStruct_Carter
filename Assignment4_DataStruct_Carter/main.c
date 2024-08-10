#include <stdio.h>
#include "hash.h"
#define MAXSIZE 11 //Max size of both the array and the hash

int main() {
    
    int input[MAXSIZE] = { 764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507 }; //Array of integers 
    int R = 7;   // Value used in the double hash

    // Create hash table 
    int hashTable[MAXSIZE];
    hashInit(hashTable, input, MAXSIZE, R);

    // Printing the hash table
    printf("Hash Table:\n");
    for (int i = 0; i < MAXSIZE; i++) {
        printf("%d: %d\n", i, hashTable[i]);
    }

    return 0;
}