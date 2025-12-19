#pragma once
#include <game/framework/f_base.hpp>
#include <game/bases/d_scene.hpp>


class dScP7_c : public dScene_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	virtual void deleteReady();
	
	~dScP7_c();
};
