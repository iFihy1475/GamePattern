#include <iostream>
#include "command.h"

using namespace std;


Command* InputHandler::handleInput()
{
	if (isPressed(BUTTON_X)) return buttonX_;
	if (isPressed(BUTTON_Y)) return buttonY_;
	if (isPressed(BUTTON_A)) return buttonA_;
	if (isPressed(BUTTON_B)) return buttonB_;

	// 아무것도 누르지 않으면 아무 것도 하지 않는다.
	return NULL;
}

int main()
{
	Command* command = InputHandler.handleInput();

	// actor만 바꾸면 플레이어가 게임에 있는 어떤 액터라도 제어 가능
	if (command)
	{
		command->execute(actor);
	}
}