#include <iostream>
using namespace std;

// 게임에서 할 수 있는 행동을 실행할 수 있는 공통 상위 클래스
class Command 
{
public:
	virtual ~Command()
	{

	}
	// 반환 값이 없는 메서드 하나 밖에 없다면 명령 패턴일 가능성이 높다.
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
	// 명령을 바인드(bind)할 메서드들...
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};

void InputHandler::handleInput()
{
	if (isPressed(BUTTON_X)) buttonX_->execute(); // 점프
	else if (isPressed(BUTTON_Y)) buttonY_->execute(); // 공격
	else if (isPressed(BUTTON_A)) buttonA_->execute(); // 무기교체
	else if (isPressed(BUTTON_B)) buttonB_->execute(); // 비틀거리기
}


int main() 
{
	
}