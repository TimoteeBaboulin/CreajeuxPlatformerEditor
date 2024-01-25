#include "Spike.h"

void Spike::Save()
{

    std::ofstream file("output.txt", std::ios_base::app);
    if (file.is_open())
    {
        file << "spike" << std::endl
            << "height : " << height << std::endl
            << "width : " << width << std::endl
            << "numbers : " << numbers << std::endl
            << "end";
        file.close();
        std::cout << "La ligne a été ajoutée avec succès à " << "filename" << std::endl;
    }
    else
    {
        std::cerr << "Impossible d'ouvrir le fichier " << "filename" << " pour l'écriture." << std::endl;
    }
}

void Spike::Load()
{
    std::ifstream file("output.txt");
    std::string line;

    float height;
    float width;

    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            if (line == "SPIKE")
            {
                std::string end;
                while (std::getline(file, end))
                {
                    if (end == "END")
                        return;      
                }
            }
        }
        file.close();
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }
}
