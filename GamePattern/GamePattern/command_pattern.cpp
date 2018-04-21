#include <iostream>
using namespace std;

// ���ӿ��� �� �� �ִ� �ൿ�� ������ �� �ִ� ���� ���� Ŭ����
class Command 
{
public:
	virtual ~Command()
	{

	}
	// ��ȯ ���� ���� �޼��� �ϳ� �ۿ� ���ٸ� ��� ������ ���ɼ��� ����.
	virtual void execute() = 0;
};

class JumpCommand : public Command
{
public:
	virtual void execute()
	{
		jump();
	}
};

class FireCommand : public Command
{
public:
	virtual void execute()
	{
		fireGun();
	}
};

class InputHandler
{
public:
	void handleInput();
	// ����� ���ε�(bind)�� �޼����...
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};

void InputHandler::handleInput()
{
	if (isPressed(BUTTON_X)) buttonX_->execute(); // ����
	else if (isPressed(BUTTON_Y)) buttonY_->execute(); // ����
	else if (isPressed(BUTTON_A)) buttonA_->execute(); // ���ⱳü
	else if (isPressed(BUTTON_B)) buttonB_->execute(); // ��Ʋ�Ÿ���
}


int main() 
{
	
}