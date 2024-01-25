#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

class Player
{
private:
	float m_density;
	float m_friction;

	float m_height;
	float m_width;
	float m_speed;

	sf::Vector2f m_pos;
	
	std::string m_spriteName;
	sf::Sprite m_sprite;

public:
	static Player LoadPlayerFromFile(std::ifstream&);

	void Save(std::ofstream&) const;
	void Load(std::ifstream&);

	float GetDensity() const;
	void SetDensity(float);

	float GetFriction() const;
	void SetFriction(float);

	float GetWidth() const;
	void SetWidth(float);

	float GetHeight() const;
	void SetHeight(float);

	float GetSpeed() const;
	void SetSpeed(float);

	sf::Vector2f GetPos() const;
	void SetPos(sf::Vector2f);
	void SetPosX(float);
	void SetPosY(float);

	std::string GetSpriteName() const;
	void SetSpriteName(std::string) const;
};

#endif // !PLAYER_H

