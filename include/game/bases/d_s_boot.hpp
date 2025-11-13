#pragma once
#include <game/framework/f_base.hpp>
#include <game/bases/d_scene.hpp>


class dScBoot_c : public dScene_c {
public:
	virtual int create();
	virtual int doDelete();
	virtual int execute();
	virtual int draw();
	
	~dScBoot_c();

    static dScBoot_c *m_instance;
};
