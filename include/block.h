#ifndef BLOCK_H
#define BLOCK_H

typedef struct Block{
    int index;
    char timestamp[30];
    int voter_id;
    char district[50];
    char candidate[50];
    char previous_hash[64];
    char hash[64];
    int nonce;
    struct Block* next;
} Block;

#endif