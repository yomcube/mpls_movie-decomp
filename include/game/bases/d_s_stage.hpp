#pragma once
#include <game/bases/d_scene.hpp>

class dScStage_c : public dScene_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	virtual void deleteReady();
	
	~dScStage_c();
};
