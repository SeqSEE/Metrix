// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2013 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPC_CLIENT_H
#define BITCOIN_RPC_CLIENT_H

#include "univalue/univalue.h"

UniValue RPCConvertValues(const std::string& strMethod, const std::vector<std::string>& strParams);
/** Non-RFC4627 JSON parser, accepts internal values (such as numbers, true, false, null)
 * as well as objects and arrays.
 */
UniValue ParseNonRFCJSONValue(const std::string& strVal);

#endif // BITCOIN_RPC_CLIENT_H