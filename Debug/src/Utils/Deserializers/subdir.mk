################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Utils/Deserializers/String_dict_deserializer.cpp 

OBJS += \
./src/Utils/Deserializers/String_dict_deserializer.o 

CPP_DEPS += \
./src/Utils/Deserializers/String_dict_deserializer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Utils/Deserializers/%.o: ../src/Utils/Deserializers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


