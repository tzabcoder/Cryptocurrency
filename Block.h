#ifndef BLOCK_H
#define BLOCK_H
#include <cstdint>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;

/*
Block Structure:
     Nonce => 64-bit signed integer 
          - Used for the mining process
     Hash => character string
          - Holds the hash of the previous block
     Index => 32-bit unsigned integer 
          - Keeps track of the block number
     Time => time integer
          - Used for the block timestamp
     Data => character string
          - Holds a list of all of the transactions for that block
*/

class Block {
public:
     //Constructor
     Block(uint32_t nIndexIn, const string &sDataIn);

     string sPrevHash;

     string GetHash();
     void MineBlock(uint32_t nDifficulty);
private:
     //Block Data
     uint32_t _nIndex;
     int64_t _nNonce;
     string _sData;
     string _sHash;
     time_t _tTime;

     string _CalculateHash();
};

#endif