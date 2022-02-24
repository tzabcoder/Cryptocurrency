#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
#include "TransactionPool.h"
#include "Consensus.h"

using namespace std;

/*
    string hash;
    bool status;
    vector<string> top_n;
    Transaction_Pool t_pool = Transaction_Pool();

    //TEST Appending
    for (int i = 0; i < 15; i++) {
        hash = t_pool.create_new_transaction("dSgUkXp2s5v8y/B?E(H+MbQeThWmYq3t", "JaNdRgUjXn2r5u8x/A?D(G+KbPeShVmY", 100);
        status = t_pool.add_to_pool(hash);

        if (status == true) {
            cout << "Transaction added to transaction pool" << endl;
        }
        else {
            cout << "Transaction NOT added to pool." << endl;
        }

        Sleep(1000);
    }

    //Test print 
    top_n = t_pool.top_n_transactions(5);   
    for (int i = 0; i < top_n.size(); i++) {
        cout << top_n[i] << endl;
    }
*/

int main() {
    //CONNECTION PROCESSING WITH PARTICIPANTS ESTABLISHED HERE
    //CONNECTIONS WITH NODES ARE ESTABLISHED IN THE CONSENSUS CLASS - pass the top_n transactions to the node
    

    return 0;
}
