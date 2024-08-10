#include <Exti.h>
#include <base/Initializer.h>
#include <bsp-interface/di.h>
#include <stm32f103zet6-interrupt/Interrupt.h>

bsp::IExtiManager &DI_ExtiManager()
{
	return hal::Exti::Instance();
}

static void SafeRun(std::function<void()> &func)
{
	try
	{
		func();
	}
	catch (...)
	{
	}
}

extern "C"
{
	void TIM6_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::TIM6_IRQn));
		SafeRun(func);
	}

	void USART1_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::USART1_IRQn));
		SafeRun(func);
	}

	void DMA1_Channel4_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::DMA1_Channel4_IRQn));
		SafeRun(func);
	}

	void DMA1_Channel5_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::DMA1_Channel5_IRQn));
		SafeRun(func);
	}

	void EXTI0_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI0_IRQn));
		SafeRun(func);
	}

	void EXTI1_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI1_IRQn));
		SafeRun(func);
	}

	void EXTI2_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI2_IRQn));
		SafeRun(func);
	}

	void EXTI3_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI3_IRQn));
		SafeRun(func);
	}

	void EXTI4_IRQHandler()
	{
		std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI4_IRQn));
		SafeRun(func);
	}
}
