################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Dummy/Console.cpp \
../src/Dummy/Dummy_Model.cpp 

OBJS += \
./src/Dummy/Console.o \
./src/Dummy/Dummy_Model.o 

CPP_DEPS += \
./src/Dummy/Console.d \
./src/Dummy/Dummy_Model.d 


# Each subdirectory must supply rules for building sources it contributes
src/Dummy/%.o: ../src/Dummy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


