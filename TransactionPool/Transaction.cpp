#include "Transaction.h"
#include "sha256.h"

Transaction :: Transaction (string sAddr, string rAddr, int val) {
    _senderAddress = sAddr;
    _recieverAddress = rAddr;
    _tTime = time(nullptr);
    _value = val;
    _status = "pending";

    _Calculate_Hash();
}

void Transaction :: _Calculate_Hash () {
    stringstream ss;

    ss << _senderAddress << _recieverAddress << _tTime << _value << _status;
    
    //Create a SHA256 hash of the transaction
    _tHash = sha256(ss.str());
}

string Transaction :: GetHash() {
    return _tHash;
}
