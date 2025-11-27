#pragma once
#include <game/bases/d_scene.hpp>

class dScSelect_c : public dScene_c {
public:
	void callback();

	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~dScSelect_c();
};
