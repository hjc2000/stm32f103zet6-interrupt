#include <bsp-interface/di/interrupt.h>
#include <hal.h>

extern "C"
{
    void TIM6_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::TIM6_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void USART1_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::USART1_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void DMA1_Channel4_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::DMA1_Channel4_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void DMA1_Channel5_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::DMA1_Channel5_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void EXTI0_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI0_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void EXTI1_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI1_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void EXTI2_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI2_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void EXTI3_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI3_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }

    void EXTI4_IRQHandler()
    {
        std::function<void()> &func = DI_IsrManager().GetIsr(static_cast<uint32_t>(IRQn_Type::EXTI4_IRQn));
        try
        {
            func();
        }
        catch (...)
        {
        }
    }
}
