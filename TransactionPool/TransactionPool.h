#ifndef TRANSACTION_POOL_H
#define TRANSACTION_POOL_H

//Function Descriptions
/*************************************************************************
FUNCTION: create_new_transaction()
    Parameters: 
        - string (sender wallet address)
        - string (receiver wallet address)
        - int (transferrable amount)
    Returns:
        - A SHA256 string hash of the transaction information 
    Description:
        - Function accepts the sender and receiver wallet address, along with
        the number of CalCoins to transfer from one address to another. The 
        function creates a transaction object and returns it string hash.

FUNCTION: add_to_pool()
    Parameters:
        - string (hash of a transaction)
    Returns:
        - bool (status of the operation)
    Description:
        - The function accepts a created hash, then proceeds to check 
        that its length meets the SHA256 length requirements. If so the 
        hash is added to the pool, otherwise the hash is rejected.

FUNCTION: top_n_transactions()
    Parameters:
        - int (number of transactions)
    Returns:
        - vector<string> (sub-vector of the transaction pool)
    Description:
        - The function returns a vector with the top N transactions existing 
        in the transaction queue.
*************************************************************************/

#include <vector>
#include <string>
#include <iostream>
#include "Transaction.h"
using namespace std;

#define BITS 8
#define SHA256LEN 256

class Transaction_Pool {
    public:
        //Public transaction pool function prototypes 
        string create_new_transaction(string, string, int);
        bool add_to_pool(string);

        vector<string> top_n_transactions(int);
    private:
        //Private transaction pool variables
        string transaction_hash;
        int transaction_bytes;
        int transaction_bits;

        vector<string> transaction_pool;
        vector<string> processing_pool;
};

#endif