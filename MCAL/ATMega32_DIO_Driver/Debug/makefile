################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ATMega32_DIO_Driver.lss \

FLASH_IMAGE += \
ATMega32_DIO_Driver.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: ATMega32_DIO_Driver.elf secondary-outputs

# Tool invocations
ATMega32_DIO_Driver.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ATMega32_DIO_Driver.map -mmcu=atmega32 -o "ATMega32_DIO_Driver.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ATMega32_DIO_Driver.lss: ATMega32_DIO_Driver.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ATMega32_DIO_Driver.elf  >"ATMega32_DIO_Driver.lss"
	@echo 'Finished building: $@'
	@echo ' '

ATMega32_DIO_Driver.hex: ATMega32_DIO_Driver.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ATMega32_DIO_Driver.elf  "ATMega32_DIO_Driver.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ATMega32_DIO_Driver.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ATMega32_DIO_Driver.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ATMega32_DIO_Driver.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
