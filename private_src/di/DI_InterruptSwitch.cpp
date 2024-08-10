#include <InterruptSwitch.h>

bsp::IInterruptSwitch &DI_InterruptSwitch()
{
	return bsp::InterruptSwitch::Instance();
}
