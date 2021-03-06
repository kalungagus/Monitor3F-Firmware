//==================================================================================================
//                           MÓDULO DE GERENCIAMENTO DA SERIAL
//==================================================================================================

//==================================================================================================
// QUEUE SELECT
//==================================================================================================
#define PRIORITY_SELECT            0
#define DIRECT_TO_SERIAL           1

//==================================================================================================
// Funções
//==================================================================================================
extern void sendMessage(String, unsigned int isDirect);
extern void sendMessageWithNewLine(String, unsigned int isDirect);
extern void sendCmdString(unsigned char, String, unsigned int isDirect);
extern void sendAck(unsigned char cmd, unsigned int isDirect);
extern bool sendSample(analogSample *theSample);
extern bool clearSamples(void);
extern void initSerialManager(void);
extern void sendCmdBuff(unsigned char cmd, char *buff, unsigned int length, unsigned int isDirect);

//==================================================================================================
