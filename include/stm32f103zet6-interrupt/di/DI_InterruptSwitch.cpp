#include <stm32f103zet6-interrupt/InterruptSwitch.h>

bsp::IInterruptSwitch &DI_InterruptSwitch()
{
	static bsp::InterruptSwitch o;
	return o;
}
