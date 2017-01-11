/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define A19_Pin GPIO_PIN_3
#define A19_GPIO_Port GPIOE
#define A20_Pin GPIO_PIN_4
#define A20_GPIO_Port GPIOE
#define Flash_CS_Pin GPIO_PIN_6
#define Flash_CS_GPIO_Port GPIOE
#define Anti_Tamper_Pin GPIO_PIN_13
#define Anti_Tamper_GPIO_Port GPIOC
#define OSC32_IN_Pin GPIO_PIN_14
#define OSC32_IN_GPIO_Port GPIOC
#define OSC32_OUT_Pin GPIO_PIN_15
#define OSC32_OUT_GPIO_Port GPIOC
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOF
#define A1_Pin GPIO_PIN_1
#define A1_GPIO_Port GPIOF
#define A2_Pin GPIO_PIN_2
#define A2_GPIO_Port GPIOF
#define A3_Pin GPIO_PIN_3
#define A3_GPIO_Port GPIOF
#define A4_Pin GPIO_PIN_4
#define A4_GPIO_Port GPIOF
#define A5_Pin GPIO_PIN_5
#define A5_GPIO_Port GPIOF
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOF
#define LED2_Pin GPIO_PIN_7
#define LED2_GPIO_Port GPIOF
#define LED3_Pin GPIO_PIN_8
#define LED3_GPIO_Port GPIOF
#define LED4_Pin GPIO_PIN_9
#define LED4_GPIO_Port GPIOF
#define OneNAND_INT_Pin GPIO_PIN_10
#define OneNAND_INT_GPIO_Port GPIOF
#define USART2_CTS_Pin GPIO_PIN_0
#define USART2_CTS_GPIO_Port GPIOA
#define USART2_RTS_Pin GPIO_PIN_1
#define USART2_RTS_GPIO_Port GPIOA
#define USART2_TX_Pin GPIO_PIN_2
#define USART2_TX_GPIO_Port GPIOA
#define USART2_RX_Pin GPIO_PIN_3
#define USART2_RX_GPIO_Port GPIOA
#define DAC1_Audio_Pin GPIO_PIN_4
#define DAC1_Audio_GPIO_Port GPIOA
#define Flash_SCK_Pin GPIO_PIN_5
#define Flash_SCK_GPIO_Port GPIOA
#define Flash_MISO_Pin GPIO_PIN_6
#define Flash_MISO_GPIO_Port GPIOA
#define Flash_MOSI_Pin GPIO_PIN_7
#define Flash_MOSI_GPIO_Port GPIOA
#define Potentiometer_Pin GPIO_PIN_4
#define Potentiometer_GPIO_Port GPIOC
#define SDcard_detect_Pin GPIO_PIN_11
#define SDcard_detect_GPIO_Port GPIOF
#define A6_Pin GPIO_PIN_12
#define A6_GPIO_Port GPIOF
#define A7_Pin GPIO_PIN_13
#define A7_GPIO_Port GPIOF
#define A8_Pin GPIO_PIN_14
#define A8_GPIO_Port GPIOF
#define A9_Pin GPIO_PIN_15
#define A9_GPIO_Port GPIOF
#define A10_Pin GPIO_PIN_0
#define A10_GPIO_Port GPIOG
#define A11_Pin GPIO_PIN_1
#define A11_GPIO_Port GPIOG
#define D4_Pin GPIO_PIN_7
#define D4_GPIO_Port GPIOE
#define D5_Pin GPIO_PIN_8
#define D5_GPIO_Port GPIOE
#define D6_Pin GPIO_PIN_9
#define D6_GPIO_Port GPIOE
#define D7_Pin GPIO_PIN_10
#define D7_GPIO_Port GPIOE
#define D8_Pin GPIO_PIN_11
#define D8_GPIO_Port GPIOE
#define D9_Pin GPIO_PIN_12
#define D9_GPIO_Port GPIOE
#define D10_Pin GPIO_PIN_13
#define D10_GPIO_Port GPIOE
#define D11_Pin GPIO_PIN_14
#define D11_GPIO_Port GPIOE
#define D12_Pin GPIO_PIN_15
#define D12_GPIO_Port GPIOE
#define I2C2_SCK_Pin GPIO_PIN_10
#define I2C2_SCK_GPIO_Port GPIOB
#define I2C2_SDA_Pin GPIO_PIN_11
#define I2C2_SDA_GPIO_Port GPIOB
#define TemperatureSensor_INT_Pin GPIO_PIN_12
#define TemperatureSensor_INT_GPIO_Port GPIOB
#define MicroSD_SCK_Pin GPIO_PIN_13
#define MicroSD_SCK_GPIO_Port GPIOB
#define MicroSD_MISO_Pin GPIO_PIN_14
#define MicroSD_MISO_GPIO_Port GPIOB
#define MicroSD_MOSI_Pin GPIO_PIN_15
#define MicroSD_MOSI_GPIO_Port GPIOB
#define D13_Pin GPIO_PIN_8
#define D13_GPIO_Port GPIOD
#define D14_Pin GPIO_PIN_9
#define D14_GPIO_Port GPIOD
#define D15_Pin GPIO_PIN_10
#define D15_GPIO_Port GPIOD
#define A16_Pin GPIO_PIN_11
#define A16_GPIO_Port GPIOD
#define A17_Pin GPIO_PIN_12
#define A17_GPIO_Port GPIOD
#define A18_Pin GPIO_PIN_13
#define A18_GPIO_Port GPIOD
#define D0_Pin GPIO_PIN_14
#define D0_GPIO_Port GPIOD
#define D1_Pin GPIO_PIN_15
#define D1_GPIO_Port GPIOD
#define A12_Pin GPIO_PIN_2
#define A12_GPIO_Port GPIOG
#define A13_Pin GPIO_PIN_3
#define A13_GPIO_Port GPIOG
#define A14_Pin GPIO_PIN_4
#define A14_GPIO_Port GPIOG
#define A15_Pin GPIO_PIN_5
#define A15_GPIO_Port GPIOG
#define MicroSD_CS_Pin GPIO_PIN_6
#define MicroSD_CS_GPIO_Port GPIOG
#define JOY_SEL_Pin GPIO_PIN_7
#define JOY_SEL_GPIO_Port GPIOG
#define User_Button_Pin GPIO_PIN_8
#define User_Button_GPIO_Port GPIOG
#define IR_IN_Pin GPIO_PIN_6
#define IR_IN_GPIO_Port GPIOC
#define LCD_backlight_Pin GPIO_PIN_7
#define LCD_backlight_GPIO_Port GPIOC
#define RS485_DIR_Pin GPIO_PIN_9
#define RS485_DIR_GPIO_Port GPIOC
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA
#define USART1_RX_Pin GPIO_PIN_10
#define USART1_RX_GPIO_Port GPIOA
#define IrDA_SD_Pin GPIO_PIN_11
#define IrDA_SD_GPIO_Port GPIOA
#define IO_Expandor_INT_Pin GPIO_PIN_12
#define IO_Expandor_INT_GPIO_Port GPIOA
#define TMS_SWDIO_Pin GPIO_PIN_13
#define TMS_SWDIO_GPIO_Port GPIOA
#define TCK_SWCLK_Pin GPIO_PIN_14
#define TCK_SWCLK_GPIO_Port GPIOA
#define TDI_Pin GPIO_PIN_15
#define TDI_GPIO_Port GPIOA
#define IrDA_TX_Pin GPIO_PIN_10
#define IrDA_TX_GPIO_Port GPIOC
#define IrDA_RX_Pin GPIO_PIN_11
#define IrDA_RX_GPIO_Port GPIOC
#define USART5_TX_Pin GPIO_PIN_12
#define USART5_TX_GPIO_Port GPIOC
#define D2_Pin GPIO_PIN_0
#define D2_GPIO_Port GPIOD
#define D3_Pin GPIO_PIN_1
#define D3_GPIO_Port GPIOD
#define USART5_RX_Pin GPIO_PIN_2
#define USART5_RX_GPIO_Port GPIOD
#define FSMC_CLK_Pin GPIO_PIN_3
#define FSMC_CLK_GPIO_Port GPIOD
#define FSMC_NOE_Pin GPIO_PIN_4
#define FSMC_NOE_GPIO_Port GPIOD
#define FSMC_NWE_Pin GPIO_PIN_5
#define FSMC_NWE_GPIO_Port GPIOD
#define FSMC_NWAIT_Pin GPIO_PIN_6
#define FSMC_NWAIT_GPIO_Port GPIOD
#define FSMC_NE0_Pin GPIO_PIN_7
#define FSMC_NE0_GPIO_Port GPIOD
#define FSMC_NE2_Pin GPIO_PIN_10
#define FSMC_NE2_GPIO_Port GPIOG
#define JOY_DOWN_Pin GPIO_PIN_11
#define JOY_DOWN_GPIO_Port GPIOG
#define FSMC_NE3_Pin GPIO_PIN_12
#define FSMC_NE3_GPIO_Port GPIOG
#define JOY_RIGHT_Pin GPIO_PIN_13
#define JOY_RIGHT_GPIO_Port GPIOG
#define JOY_LEFT_Pin GPIO_PIN_14
#define JOY_LEFT_GPIO_Port GPIOG
#define JOY_UP_Pin GPIO_PIN_15
#define JOY_UP_GPIO_Port GPIOG
#define TDO_SWO_Pin GPIO_PIN_3
#define TDO_SWO_GPIO_Port GPIOB
#define TRST_Pin GPIO_PIN_4
#define TRST_GPIO_Port GPIOB
#define I2C1_SCK_Pin GPIO_PIN_6
#define I2C1_SCK_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB
#define HDMI_CEC_Pin GPIO_PIN_8
#define HDMI_CEC_GPIO_Port GPIOB
#define HDMI_HPD_Pin GPIO_PIN_9
#define HDMI_HPD_GPIO_Port GPIOB
#define FSMC_BLN0_Pin GPIO_PIN_0
#define FSMC_BLN0_GPIO_Port GPIOE
#define FSMC_BLN1_Pin GPIO_PIN_1
#define FSMC_BLN1_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
