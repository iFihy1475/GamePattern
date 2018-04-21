#pragma once

class Command
{
public:
	virtual ~Command()
	{

	}
	// Command Class 유연성을 높이기 위해 객체를 밖에서 전달
	// 디커플링(DeCoupling)
	virtual void execute(GameActor& actor) = 0;
	// 명령 취소를 위한 순수 가상 함수
	virtual void undo() = 0;
};

class JumpCommand : public Command
{
public:
	virtual void execute(GameActor& actor)
	{
		actor.jump();
	}
};

class InputHandler
{
public:
	Command* handleInput();
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};