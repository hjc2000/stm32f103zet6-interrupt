#include "InterruptSwitch.h"
#include <base/Initializer.h>

static base::Initializer _init{
	[]()
	{
		bsp::InterruptSwitch::Instance();
	}};
