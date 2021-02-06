#pragma once
#include "Ikey.h"
#include "Interface_algoritm.h"

class AntiGrassHopper: Ikey, Ishifr
{
protected:
static const uint8_t length_of_key=0x20;
	uint8_t* key;
	void X(uint8_t& blockKey, uint8_t& blockText);
	void antiS(uint8_t& blockText);
	void antiL(uint8_t& blockText);
	void antiR(uint8_t& blockText);
	uint8_t l(uint8_t& blockText);
	uint8_t pi(uint8_t& num);	
	
 public:
	void getKey(uint8_t& key_length256_bit);
	AntiGrassHopper();
	~GrassHopper()
	{
		delete[] key;
		delete[] text;
	};
};