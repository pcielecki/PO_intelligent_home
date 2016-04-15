################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Smart_house/Adapter.cpp 

OBJS += \
./src/Smart_house/Adapter.o 

CPP_DEPS += \
./src/Smart_house/Adapter.d 


# Each subdirectory must supply rules for building sources it contributes
src/Smart_house/%.o: ../src/Smart_house/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


