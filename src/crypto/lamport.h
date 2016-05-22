// Copyright (c) 2016 Ansho Enigu
#ifndef BITCOIN_CRYPTO_LAMPORT_H
#define BITCOIN_CRYPTO_LAMPORT_H

#include <boost/multiprecision/cpp_int.hpp>

#include "crypto/ripemd160.h"

using namespace boost::multiprecision;

class LAMPORT
{
private:
    char pubkeys[320][20];
    char prikeys[320][20];
    char sig[20][2][20];
public:
    static const int chuncksize = 1; /* in bytes */
    bool checksig(unsigned char data[10000], char sig[20][2][20], char rootkey[20], char merklewit[]);
    int createsig(unsigned char data[10000], uint512_t prikey, int sellectedpubkey);                 /* data is data to be signed and prikey is a sudo-random num gen seed */
    int createmerklewit(uint512_t prikey, int sellectedpubkey);
    int createrootkey(uint512_t prikey);
    int createpubkey(uint512_t prikey);
};

#endif // BITCOIN_CRYPTO_LAMPORT_H
