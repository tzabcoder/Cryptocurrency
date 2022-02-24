#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <cstdlib>
#include <vector>
#include "Block.h"
using namespace std;

/*
     Class Blockchain:
     public:
          Constructor Blockchain

          void AddBlock(bNew)
          - bNew => New Block object

     private:
          uint32_t _nDifficulty => 32-bit unsigned integer
          vector<Block> _vChain => Vector of Block objects

          Block _GetLastBlock() const
*/

class Blockchain {
public:
     //Constructor
     Blockchain();

     //Public Functions
     void AddBlock(Block bNew);

private:
     //Private Variables
     uint32_t _nDifficulty;
     vector<Block> _vChain;

     //Private Functions
     Block _GetLastBlock() const; //const directive ensures function cannot change variables in Blockchain class
};

#endif

