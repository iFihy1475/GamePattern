#include <iostream>
#include "command.h"
using namespace std;

Command* handleInput()
{
	Unit* unit = getSelectedUnit();
	if (isPressed(BUTTON_UP))
	{
		int destY = unit->y() - 1;
		return new MoveUnitCommand(unit, unit->x(), destY);
	}
	if (isPressed(BUTTON_DOWNM))
	{
		int destY = unit->y() + 1;
		return new MoveUnitCommand(unit, unit->x(), destY);
	}

	// 다른 이동들 ...
	return NULL;
}
int main()
{

}