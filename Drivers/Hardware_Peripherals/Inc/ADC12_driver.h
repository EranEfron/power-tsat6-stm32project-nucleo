/*
 * FILENAME: ADC12_driver.h
 *
 * DESCRIPTION: Header for the ADC128S102 analog to digital coverter driver.
 *
 * AUTHORS:
 *  - Sanjana RoyChowdhury (sanjana.roy@umsats.ca)
 *
 * CREATED ON: May 22, 2023
 */

#ifndef HARDWARE_PERIPHERALS_INC_ADC12_DRIVER_H_
#define HARDWARE_PERIPHERALS_INC_ADC12_DRIVER_H_

//###############################################################################################
//Include Directives
//###############################################################################################
#include <stdint.h>
#include <stddef.h>
#include "stm32l4xx_hal.h"


//###############################################################################################
// Defines
//###############################################################################################

// ADC 1 
#define ADC1_GPIO_PORT  GPIB
#define ADC1_DIN_PIN    GPIO_PIN_3
#define ADC1_DOUT_PIN   GPIO_PIN_4
#define ADC1_CS_PIN     GPIO_PIN_5
#define ADC1_SCLK_PIN   GPIO_PIN_6

// ADC 2 
#define ADC2_GPIO_PORT  GPIOC
#define ADC2_DIN_PIN    GPIO_PIN_3
#define ADC2_DOUT_PIN   GPIO_PIN_4
#define ADC2_CS_PIN     GPIO_PIN_5
#define ADC2_SCLK_PIN   GPIO_PIN_6

// ADC 3 
#define ADC3_GPIO_PORT  GPIOD
#define ADC3_DIN_PIN    GPIO_PIN_3
#define ADC3_DOUT_PIN   GPIO_PIN_4
#define ADC3_CS_PIN     GPIO_PIN_5
#define ADC3_SCLK_PIN   GPIO_PIN_6



//###############################################################################################
// Enumeration
//###############################################################################################


typedef enum {
	ADC12_HAL_OK 		= HAL_OK,
	ADC12_HAL_ERROR 	= HAL_ERROR,
	ADC12_HAL_BUSY 	    = HAL_BUSY,
	ADC12_HAL_TIMEOUT 	= HAL_TIMEOUT
} ADC12_StatusTypeDef;

//###############################################################################################
//Prototypes
//###############################################################################################

ADC12_StatusTypeDef ADC_SPI_Configuration1();

ADC12_StatusTypeDef ADC1_ReadValues(uint16_t* values, size_t numValues);

ADC12_StatusTypeDef ADC_SPI_Configuration2();

ADC12_StatusTypeDef ADC2_ReadValues(uint16_t* values, size_t numValues);

ADC12_StatusTypeDef ADC_SPI_Configuration3();

ADC12_StatusTypeDef ADC3_ReadValues(uint16_t* values, size_t numValues);


void ADC1_Select(void);
void ADC1_Deselect(void);
void ADC1_ClockHigh(void);
void ADC1_ClockLow(void);
void ADC2_Select(void);
void ADC2_Deselect(void);
void ADC2_ClockHigh(void);
void ADC2_ClockLow(void);
void ADC3_Select(void);
void ADC3_Deselect(void);
void ADC3_ClockHigh(void);
void ADC3_ClockLow(void);



#endif /* HARDWARE_PERIPHERALS_INC_ADC12_DRIVER_H_ */
