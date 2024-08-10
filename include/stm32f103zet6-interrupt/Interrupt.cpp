#include "Interrupt.h"
#include <bsp-interface/di.h>
#include <stdexcept>

using namespace hal;

void hal::Interrupt::SetPriorityGroup(PreemptionPriorityGroup group)
{
	HAL_NVIC_SetPriorityGrouping((uint32_t)group);
}
