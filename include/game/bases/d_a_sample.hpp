#pragma once
#include <game/framework/f_base.hpp>

class daSample_c : public fBase_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~daSample_c();
};

void fn_7_180();
