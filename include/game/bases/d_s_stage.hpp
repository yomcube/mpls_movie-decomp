#pragma once
#include <game/framework/f_base.hpp>

class dScStage_c : public fBase_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	virtual void deleteReady();
	
	~dScStage_c();
};
