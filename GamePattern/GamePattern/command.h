#pragma once

class Command
{
public:
	virtual ~Command()
	{

	}
	// Command Class �������� ���̱� ���� ��ü�� �ۿ��� ����
	// ��Ŀ�ø�(DeCoupling)
	virtual void execute(GameActor& actor) = 0;
	// ��� ��Ҹ� ���� ���� ���� �Լ�
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