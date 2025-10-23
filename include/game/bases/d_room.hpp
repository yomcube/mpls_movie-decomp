#pragma once
#include <game/framework/f_base.hpp>

class dRoom_c : public fBase_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~dRoom_c();
};
