#ifndef REVOLVERCOIN_UINT512_H
#define REVOLVERCOIN_UINT512_H

#include "uint256.h"
#include "arith_uint256.h"

//////////////////////////////////////////////////////////////////////////////
//
// uint512
//

typedef long long  int64;
typedef unsigned long long  uint64;


/** 512-bit unsigned integer */
class uint512 : public base_uint<512>
{
public:

	uint256 trim256() const
	{
		uint256 ret;
		for (unsigned int i = 0; i < uint256::WIDTH; i++) {
			ret.data[i] = pn[i];
		}
		return ret;
	}
};


#endif // REVOLVERCOIN_UINT512_H
