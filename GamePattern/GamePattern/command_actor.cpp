#include <iostream>
#include "command.h"

using namespace std;


Command* InputHandler::handleInput()
{
	if (isPressed(BUTTON_X)) return buttonX_;
	if (isPressed(BUTTON_Y)) return buttonY_;
	if (isPressed(BUTTON_A)) return buttonA_;
	if (isPressed(BUTTON_B)) return buttonB_;

	// �ƹ��͵� ������ ������ �ƹ� �͵� ���� �ʴ´�.
	return NULL;
}

int main()
{
	Command* command = InputHandler.handleInput();

	// actor�� �ٲٸ� �÷��̾ ���ӿ� �ִ� � ���Ͷ� ���� ����
	if (command)
	{
		command->execute(actor);
	}
}