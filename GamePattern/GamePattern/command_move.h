#pragma once
#include "command.h"

class  MoveUnitCommand : public Command
{
public:
	MoveUnitCommand(Unit* unit, int x, int y) : unit_(unit), x_(x), y_(y)
	{

	}

	MoveUnitCommand(Unit* unit, int x, int y) : unit_(unit), x_(x), y_(y), xBefore_(0), yBefore_(0), x_(x), y_(y)
	{

	}
	
	virtual void execute()
	{
		// 이동 취소가 가능하도록 원래 유닛 위치 저장 xBefore_, yBefore_
		xBefore_ = unit_->x();
		yBefore_ = unit_->y();
		unit_->moveTo(x_, y_);
	}

	virtual void undo()
	{
		unit_->moveTo(xBefore_, yBefore_);
	}

private:
	Unit* unit_;
	int x_, y_;
	int xBefore_, yBefore_;
};
