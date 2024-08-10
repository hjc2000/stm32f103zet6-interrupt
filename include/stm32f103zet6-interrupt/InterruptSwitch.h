#pragma once
#include <base/Initializer.h>
#include <bsp-interface/di.h>
#include <stm32f103zet6-interrupt/Exti.h>
#include <stm32f103zet6-interrupt/Interrupt.h>

namespace bsp
{
	class InterruptSwitch
		: public bsp::IInterruptSwitch
	{
	private:
		InterruptSwitch() = default;

	public:
		static InterruptSwitch &Instance()
		{
			static InterruptSwitch o;
			return o;
		}

		void DisableInterrupt(uint32_t irq) noexcept override
		{
			HAL_NVIC_DisableIRQ(static_cast<IRQn_Type>(irq));
		}

		void EnableInterrupt(uint32_t irq) noexcept override
		{
			HAL_NVIC_EnableIRQ(static_cast<IRQn_Type>(irq));
		}

		/// @brief 禁止全局中断
		virtual void DisableGlobalInterrupt() noexcept
		{
			__disable_irq();
		}

		/// @brief 启用全局中断
		virtual void EnableGlobalInterrupt() noexcept
		{
			__enable_irq();
		}
	};
}
