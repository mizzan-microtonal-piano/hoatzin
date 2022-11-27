################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Fatar/fatar_port.c 

OBJS += \
./Fatar/fatar_port.o 

C_DEPS += \
./Fatar/fatar_port.d 


# Each subdirectory must supply rules for building sources it contributes
Fatar/%.o Fatar/%.su: ../Fatar/%.c Fatar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -c -I../Core/Inc -I"C:/Users/hr193/OneDrive/Documents/Projects/hoatzin/software/workspace/hoatzin/Middlewares/ST/STM32_USB_Device_Library/Class/MIDI/Inc" -I"C:/Users/hr193/OneDrive/Documents/Projects/hoatzin/software/workspace/hoatzin/Middlewares/ST/STM32_USB_Device_Library/Class/MIDI/Src" -I"C:/Users/hr193/OneDrive/Documents/Projects/hoatzin/software/workspace/hoatzin/MIDI/inc" -I"C:/Users/hr193/OneDrive/Documents/Projects/hoatzin/software/workspace/hoatzin/MIDI/src" -I"C:/Users/hr193/OneDrive/Documents/Projects/hoatzin/software/workspace/hoatzin/Fatar" -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/AUDIO/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Fatar

clean-Fatar:
	-$(RM) ./Fatar/fatar_port.d ./Fatar/fatar_port.o ./Fatar/fatar_port.su

.PHONY: clean-Fatar

