#ifndef PLYER_H_
#define PLAYER_H_

#include "GameObject.h"

class Player : public GameObject
{
public:
	Player(const Vec2& _p);
	virtual void update(float _dt) override;// time
	virtual void draw() const override;
	virtual void moveEvent(const Vec2& _m) override;// moving

	Vec2 getPos() const { return m_pos; }
	Vec2 getDir() const { return m_dir; }
	void setPos(const Vec2& _p) { m_pos = _p; }
private:
	Vec2 m_pos;
	Vec2 m_dir;

};
#endif