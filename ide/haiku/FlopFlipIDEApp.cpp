#include "FlopFlipIDEApp.hpp"
#include "FlopFlipIDEWindow.hpp"

#include <Window.h>

FlopFlipIDEApp::FlopFlipIDEApp() : BApplication("application/flop-flip-ide")
{
	
}
void FlopFlipIDEApp::ReadyToRun()
{
	BWindow* ide=new FlopFlipIDEWindow();
	ide->Show();
}
