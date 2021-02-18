#pragma once
#include "Ikey.h"
#include "Interface_algoritm.h"
#include <cint>

class GrassHopper: Ikey, Ishifr
{
protected:
	static const uint8_t length_of_key=0x20;
	uint8_t* key;
	uint8_t* text;
	void X(uint8_t& blockKey, uint8_t& blocktext);
	void S();
	void L();
	void R();
	uint8_t l();
	uint8_t pi(uint8_t& num);
 
 public:
	GrassHopper();
	void getKey(uint8_t& key_length256_bit);
	//void in(uint8_t& name_of_file_key, uint8_t& name_of_file_text);
	//void out(uint8_t& name_of_file_out);
	~GrassHopper()
	{
		delete[] key;
		delete[] text;
	};
 
}
