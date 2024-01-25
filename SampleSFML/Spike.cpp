#include "Spike.h"

void Spike::Save(std::ofstream& _file)
{

    if (_file.is_open())
    {
        _file << "spike" << std::endl
            << "height : " << height << std::endl
            << "width : " << width << std::endl
            << "numbers : " << numbers << std::endl
            << "end";
        _file.close();
        std::cout << "La ligne a été ajoutée avec succès à " << "filename" << std::endl;
    }
    else
    {
        std::cerr << "Impossible d'ouvrir le fichier " << "filename" << " pour l'écriture." << std::endl;
    }
}

void Spike::Load(std::ifstream& _file)
{
    std::string line;

    float height;
    float width;

    if (_file.is_open())
    {
        while (std::getline(_file, line))
        {
            if (line == "SPIKE")
            {
                std::string end;
                while (std::getline(_file, end))
                {
                    if (end == "END")
                        return;      
                }
            }
        }
        _file.close();
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }
}
