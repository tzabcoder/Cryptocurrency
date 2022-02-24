#include "TransactionPool.h"

//Creates a new transaction object and returns its hash
string Transaction_Pool :: create_new_transaction(string sender_addr, string receiver_addr, int amount) {
    Transaction t = Transaction(sender_addr, receiver_addr, amount);

    return t.GetHash();
}

//Adds a SHA256 hash to the transaction pool
bool Transaction_Pool :: add_to_pool(string hash) {
    bool pushback_flag = false;

    transaction_bytes = hash.size() / 2;
    transaction_bits = transaction_bytes * BITS;
    if (transaction_bits == SHA256LEN) {
        transaction_pool.push_back(hash);
        pushback_flag = true;
    }
    else {
        pushback_flag = false;
    }

    return pushback_flag;
}

//Returns the top N transactions from transaction pool
vector<string> Transaction_Pool :: top_n_transactions(int n) {
    auto first = transaction_pool.cbegin();
    auto last = transaction_pool.cbegin() + n;

    vector<string> v(first, last);
    return v;
}