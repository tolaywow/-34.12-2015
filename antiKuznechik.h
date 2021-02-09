#pragma once
#include "Ikey.h"
#include "Interface_algoritm.h"

class AntiGrassHopper: Ikey, Ishifr
{
protected:
static const uint8_t length_of_key=0x20;
	uint8_t* key;
	void X(uint8_t& blockKey, uint8_t& blockText);
	void antiS();
	void antiL();
	void antiR();
	uint8_t l();
	uint8_t antipi(uint8_t& num);	
	
 public:
	void getKey(uint8_t& key_length256_bit);
	AntiGrassHopper();
	~GrassHopper()
	{
		delete[] key;
		delete[] text;
	};
};