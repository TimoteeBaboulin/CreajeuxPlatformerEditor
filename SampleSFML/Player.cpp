#include "Player.h"
#include <string>

Player Player::LoadPlayerFromFile(std::ifstream& _stream)
{
    Player player;
    std::string inputStr;

    while (inputStr != "END")
    {
        _stream >> inputStr;
        
        if (inputStr == "Speed")
        {
            player.m_speed = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Size")
        {
            player.m_width = GetFloatFromFStream(_stream);
            player.m_height = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Density")
        {
            player.m_density = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Friction")
        {
            player.m_friction = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Position")
        {
            player.m_pos.x = GetFloatFromFStream(_stream);
            player.m_pos.y = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Sprite")
        {
            _stream >> player.m_spriteName;
        }
    }

    return player;
}

void Player::Save(std::ofstream& _stream) const
{
    _stream << "PLAYER" << std::endl;

    _stream << "Speed " << m_speed << std::endl;
    _stream << "Size " << m_width << " " << m_height << std::endl;
    _stream << "Density " << m_density << std::endl;
    _stream << "Friction " << m_friction << std::endl;
    _stream << "Position " << m_pos.x << " " << m_pos.y << std::endl;
    _stream << "Sprite " << m_spriteName << std::endl;

    _stream << "END" << std::endl;
}

void Player::Load(std::ifstream& _stream)
{
    std::string inputStr;

    while (inputStr != "END")
    {
        _stream >> inputStr;

        if (inputStr == "Speed")
        {
            m_speed = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Size")
        {
            m_width = GetFloatFromFStream(_stream);
            m_height = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Density")
        {
            m_density = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Friction")
        {
            m_friction = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Position")
        {
            m_pos.x = GetFloatFromFStream(_stream);
            m_pos.y = GetFloatFromFStream(_stream);
        }
        else if (inputStr == "Sprite")
        {
            _stream >> m_spriteName;
        }
    }
}

float Player::GetDensity() const
{
    return m_density;
}

void Player::SetDensity(float _density)
{
    m_density = _density;
}

float Player::GetFriction() const
{
    return m_friction;
}

void Player::SetFriction(float _friction)
{
    m_friction = _friction;
}

float Player::GetWidth() const
{
    return m_width;
}

void Player::SetWidth(float _width)
{
    m_width = _width;
}

float Player::GetHeight() const
{
    return m_height;
}

void Player::SetHeight(float _height)
{
    m_height = _height;
}

float Player::GetSpeed() const
{
    return m_speed;
}

void Player::SetSpeed(float _speed)
{
    m_speed = _speed;
}

sf::Vector2f Player::GetPos() const
{
    return m_pos;
}

void Player::SetPos(sf::Vector2f _pos)
{
    m_pos = _pos;
}

void Player::SetPosX(float _x)
{
    m_pos.x = _x;
}

void Player::SetPosY(float _y)
{
    m_pos.y = _y;
}

std::string Player::GetSpriteName() const
{
    return m_spriteName;
}

void Player::SetSpriteName(std::string _spriteName) const
{
    m_spriteName = _spriteName;
}
