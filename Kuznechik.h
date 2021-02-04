#pragma once
#include "Ikey.h"
#include "Interface_algoritm.h"

class GrassHopper: Ikey, Ishifr
{
private:
	static const uint8_t length_of_key=0x20;
	uint8_t* key;
	void X(uint8_t& blockKey, uint8_t& blockText);
	void S(uint8_t& blockText);
	void L(uint8_t& blockText);
	void R(uint8_t& blockText);
	uint8_t l(uint8_t& blockText);
	uint8_t pi(uint8_t& num);
 
 public:
	void getKey(uint8_t& key_length256_bit);
	//void in(uint8_t& name_of_file_key, uint8_t& name_of_file_text);
	//void out(uint8_t& name_of_file_out);
	~GrassHopper()
	{
		delete[] key;
	};
 
}