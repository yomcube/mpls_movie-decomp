#pragma once
#include <game/bases/d_actor.hpp>

class dAcSample_c : public dActor_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~dAcSample_c();
};

void fn_7_180();
