#ifndef FLOP_FLIP_IDE_WINDOW_HPP
#define FLOP_FLIP_IDE_WINDOW_HPP

#include <Window.h>

class FlopFlipIDEWindow : public BWindow{
	public:
		FlopFlipIDEWindow();
		bool QuitRequested();
		void MessageReceived(BMessage* msg);
};

#endif
