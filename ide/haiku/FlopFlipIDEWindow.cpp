#include "FlopFlipIDEWindow.hpp"
#include <InterfaceKit.h>

const uint32 CREATE=0;
const uint32 FILE=1;

FlopFlipIDEWindow::FlopFlipIDEWindow() : BWindow(BRect(100,100,800,600),"FlopFlip IDE",B_TITLED_WINDOW,0)
{
	BMenuBar* menu=new BMenuBar(BRect(0,0,800,600),"MenuBar");
	BMenu* file=new BMenu("File");
	BMenuItem* fileIten=new BMenuItem("File",new BMessage(FILE));
	BMenu* insideFile=new BMenu("InsideFile");
	BMenuItem* create=new BMenuItem("Create",new BMessage(CREATE));

	AddChild(menu);
	menu->AddChild(file);
	file->AddItem(insideFile);
	insideFile->AddItem(create);

	
}
bool FlopFlipIDEWindow::QuitRequested()
{
	//be_app_messenger.SendMessage(B_QUIT_REQUESTED);
	return BWindow::QuitRequested();
}
void FlopFlipIDEWindow::MessageReceived(BMessage* msg)
{
	switch(msg->what)
	{
		default:{
			BWindow::MessageReceived(msg);
		}
			
	}
}
