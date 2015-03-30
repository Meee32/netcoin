// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POW_H
#define BITCOIN_POW_H

#include <stdint.h>

class CBlockHeader;
class CBlockIndex;
class uint256;

unsigned int GetNextWorkRequired(const CBlockIndex* pindexLast, const CBlockHeader *pblock);

static const int BLOCK_HEIGHT_KGW_START = 218500; // HISTORICAL HARD FORK. DO NOT CHANGE
static const int BLOCK_HEIGHT_POS_AND_DIGISHIELD_START = 420000; //POS + DIGISHIELD HISTORICAL FORK
static const int BLOCK_HEIGHT_DIGISHIELD_FIX_START = 438500; //DIGISHIELD FIX FORK

static const int BLOCK_HEIGHT_KGW_START_TESTNET = 5;
static const int BLOCK_HEIGHT_POS_AND_DIGISHIELD_START_TESTNET =10;
static const int BLOCK_HEIGHT_DIGISHIELD_FIX_START_TESTNET =20;

const CBlockIndex* GetLastBlockIndex(const CBlockIndex* pindex, bool fProofOfStake);

/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWork(uint256 hash, unsigned int nBits);
uint256 GetBlockProof(const CBlockIndex& block);

#endif // BITCOIN_POW_H
