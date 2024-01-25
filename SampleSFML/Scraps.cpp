#include "Scraps.h"
#include "Spike.h"

void Scraps::Save(std::ofstream& _file)
{
	if (_file.is_open())
	{
		_file << "SCRAP\n";
		_file << "Speed " << speed << "\n";
		_file << "Height " << height << "\n";
		_file << "Width " << width << "\n";
		_file << "Friction " << friction << "\n";
		_file << "Density " << density << "\n";
		_file << "Elasticity " << elasticity << "\n";
		_file << "PosX " << pos.x << "\n";
		_file << "PosY " << pos.y << "\n";
		for (int i = 0; i < sizeof(spikes); i++)
		{
			spikes[i]->Save(_file);
		}
		_file << "Shape " << shape << "\n";
		_file << "Sprite " << spriteID << "\n";
		_file << "END";
	}
}

Scraps Scraps::Load(std::ifstream& _file)
{
	Scraps tempScrap;
	std::string value;
	int spikesNumbers = 0;
	if (_file.is_open())
	{
		while (value != "END")
		{
			 _file >> value;
			if (value == "Speed")
			{
				tempScrap.speed = GetFloatFromFStream(_file);
			}
			else if (value == "Width")
			{
				 tempScrap.width = GetFloatFromFStream(_file);
			}
			else if (value == "Height")
			{
				 tempScrap.height = GetFloatFromFStream(_file);
			}
			else if (value == "Friction")
			{
				 tempScrap.friction = GetFloatFromFStream(_file);
			}
			else if (value == "Density")
			{
				 tempScrap.density = GetFloatFromFStream(_file);
			}
			else if (value == "Elasticity")
			{
				 tempScrap.elasticity = GetFloatFromFStream(_file);
			}
			else if (value == "PosX")
			{
				 tempScrap.pos.x = GetFloatFromFStream(_file);
			}
			else if (value == "PosY")
			{
				 tempScrap.pos.y = GetFloatFromFStream(_file);
			}
			else if (value == "Shape")
			{
				char shapeID;
				_file >> shapeID;
				tempScrap.shape = Shape(shapeID);
			}
			else if (value == "Sprite")
			{
				_file >> tempScrap.spriteID;
			}
			else if (value == "Spike")
			{
				tempScrap.spikes[spikesNumbers]->Load(_file);
			}
		}
		return tempScrap;
	}
}
