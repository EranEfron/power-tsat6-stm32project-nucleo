/*
 * FILENAME: TPS_driver.c
 *
 * DESCRIPTION: Driver for the TPS22810TDBVRQ1 load switch.
 *
 * AUTHORS:
 *  - Sanjana RoyChowdhury (sanjana.roy@umsats.ca)
 *
 * CREATED ON: May 16, 2023
 */


//###############################################################################################
//Include Directives
//###############################################################################################
#include "stm32l4xx_hal.h"
#include "TPS_driver.h"

//###############################################################################################
//Driver Functions
//###############################################################################################

void TPS22810_Init()
{
    // Initialize the EN/UVLO pins as outputs
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = TPS22810_PAYLOAD_PWR_EN_PIN | TPS22810_ADCS_PWR_EN_PIN | TPS22810_BAT_PWR_EN_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(TPS22810_GPIO_Port, &GPIO_InitStruct);
}

void TPS22810_EnablePayloadPower()
{
    // Enable the payload power 
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_PAYLOAD_PWR_EN_PIN, GPIO_PIN_SET);
}

void TPS22810_DisablePayloadPower()
{
    // Disable the payload power 
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_PAYLOAD_PWR_EN_PIN, GPIO_PIN_RESET);
}

void TPS22810_EnableADCSPower()
{
    // Enable the ADCS power 
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_ADCS_PWR_EN_PIN, GPIO_PIN_SET);
}

void TPS22810_DisableADCSPower()
{
    // Disable the ADCS power 
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_ADCS_PWR_EN_PIN, GPIO_PIN_RESET);
}

void TPS22810_EnableBatPower()
{
    // Enable the battery power
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_BAT_PWR_EN_PIN, GPIO_PIN_SET);
}

void TPS22810_DisableBatPower()
{
    // Disable the battery power 
    HAL_GPIO_WritePin(TPS22810_GPIO_Port, TPS22810_BAT_PWR_EN_PIN, GPIO_PIN_RESET);
}
