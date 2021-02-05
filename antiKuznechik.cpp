#include"antiKuznechik.h"

void AntiGrassHopper :: getKey(int8_t& key_length256_bit)
{
	key = new uint8_t [length_of_key];
	
	for(uint8_t k=0; k<0x20; ++k)
	{
		key[k]=key_length256_bit[k];
	}
};

