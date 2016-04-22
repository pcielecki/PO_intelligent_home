################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Datas/IntData.cpp \
../src/Datas/TempData.cpp 

OBJS += \
./src/Datas/IntData.o \
./src/Datas/TempData.o 

CPP_DEPS += \
./src/Datas/IntData.d \
./src/Datas/TempData.d 


# Each subdirectory must supply rules for building sources it contributes
src/Datas/%.o: ../src/Datas/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


