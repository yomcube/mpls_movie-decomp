#pragma once
#include <game/bases/d_actor.hpp>

// == TODO ==
// Something is fishy; the size of the class should be 0xA0, but it's currently 0x64.
// dActor_c has an incorrect size? It seems to inherit fBase_c, so maybe I'm missing something.
class daSample_c : public dActor_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~daSample_c();
};

void fn_7_180();
