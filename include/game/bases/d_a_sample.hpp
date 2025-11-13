#pragma once
#include <game/bases/d_actor.hpp>

// TODO: Is this an actor or actor base?
class daSample_c : public dActor_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~daSample_c();
};

void fn_7_180();
