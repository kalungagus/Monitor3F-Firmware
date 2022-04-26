//**************************************************************************************************
//                                     Classe de sistema
// Descrição: Aqui está organizado o sistema de controle para os projetos
//**************************************************************************************************

//==================================================================================================
// Includes
//==================================================================================================
#include <Arduino.h>

//==================================================================================================
// Comandos
//==================================================================================================
#define CMD_RESET             0x80
#define CMD_MESSAGE           0x81
#define CMD_GET_SAMPLES       0x82

//==================================================================================================
// Configurações
//==================================================================================================
#define SERIAL_SEND_HEADER            1
#define ADC_SAMPLES_COUNT             1000