// Copyright (c) 2016 Ansho Enigu
#ifndef BITCOIN_CRYPTO_LAMPORT_H
#define BITCOIN_CRYPTO_LAMPORT_H

#include "crypto/ripemd160.h"

class LAMPORT
{
private:
    char pubkeys[320][20];
    char prikeys[320][20];
    
public:
    bool checksig(unsigned char* data, char sig[160][20], char pubkey[320][20]);    /* data is the transaction and sig is 160-bit's  */
    char* createsig(unsigned char* data, unsigned uint512_t prikey);                 /* data is data to be signed and prikey is a sudo-random num gen seed */
    
};

#endif // BITCOIN_CRYPTO_LAMPORT_H
