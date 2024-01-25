#include "SFML/Graphics.hpp"
#include "PlatformEditor.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SampleSFML::PlatformEditor form;
	Application::Run(% form);
}