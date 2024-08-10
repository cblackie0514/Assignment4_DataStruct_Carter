#include <stdio.h>
#include "hash.h"
int hash1(int k, int M) {
    int hash1 = k % M; //Hash1 equation 
    return hash1;
}

int hash2(int k, int R) {
    int hash2 = R - (k % R); // Hash 2 equation
    return hash2;
}

void hashInit(int* hashTable, int* input, int M, int R) {

	for (int i = 0; i < M; i++) {
		hashTable[i] = -1; //Initalize the table to -1 for empty spots
	}

    for (int i = 0; i < M; i++) { //Insert elements into the has table using double hash.
        int key = input[i];
        int index = hash1(key, M);
        int step = hash2(key, R);
        int j = 0;

        // Perform double hashing to find an empty slot
        while (hashTable[(index + j * step) % M] != -1) {
            j++;
        }

        hashTable[(index + j * step) % M] = key;
    }
		
}

