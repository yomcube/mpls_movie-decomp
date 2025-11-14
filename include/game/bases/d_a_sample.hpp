#pragma once
#include <game/bases/d_actor.hpp>

class daSample_c : public dActor_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~daSample_c();
};

void fn_7_180();
