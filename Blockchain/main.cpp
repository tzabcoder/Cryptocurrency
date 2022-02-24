#include <iostream>
#include <ctime>
#include "BlockChain.h"
using namespace std;

int main() {
	
	clock_t time;

     Blockchain bChain = Blockchain();
     
     time = clock();

     cout << "Mining the First Block!!!!!!!" << endl;
     bChain.AddBlock(Block(1, "Block 1 Data"));
     
     cout << "Mining the Second block!!!!!!" << endl;
     bChain.AddBlock(Block(2, "Block 2 Data"));
     
     cout << "Mining the Third block!!!!!" << endl;
     bChain.AddBlock(Block(3, "Block 3 Data"));
     
     time = clock() - time;
     
     cout << "Mining three blocks took: " << (float)time / CLOCKS_PER_SEC << " seconds." << endl;

     return 0;
}
