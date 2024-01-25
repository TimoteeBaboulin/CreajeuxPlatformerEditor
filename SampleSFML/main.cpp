#include "SFML/Graphics.hpp"
#include "PlatformEditor.h"
#include "Spike.h";
#include "common.h";
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Spike spike = { 10.0f, 10.0f, 10, sf::Vector2f(10, 10) };
	std::cout << "test";
	spike.Save();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SampleSFML::PlatformEditor form;
	Application::Run(% form);

	
	return 0;
}