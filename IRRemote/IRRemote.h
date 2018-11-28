#ifndef IR_REMOTE_H
#define IR_REMOTE_H


#include <Arduino.h>

#define	IR_PIN	9
#define	TIMER4_TICK				64								// 64us

#define LEAD_CODE_HIGH_WIDTH	4500/TIMER4_TICK				//high is pwm on 4500us
#define LEAD_CODE_LOW_WIDTH		4500/TIMER4_TICK

#define BIT_CODE_HIGH_WIDTH		560/TIMER4_TICK
#define BIT1_CODE_LOW_WIDTH		1680/TIMER4_TICK
#define BIT0_CODE_LOW_WIDTH		560/TIMER4_TICK

#define END_CODE_WIDTH			560/TIMER4_TICK

#define INTER_MUTE_WIDTH		5000/TIMER4_TICK


//Leadcode high + leadcode low +bit1 high +bit1 low +bit2 high +bit2 low + ...... +endcode

#define	LEAD_CODE_HIGH_SENDING	1 			
#define	LEAD_CODE_LOW_SENDING	2 

#define	DATA_BIT_HIGH_SENDING	3 
#define	DATA_BIT_LOW_SENDING	4 

#define END_CODE_SENDING		5		

#define	INTER_MUTE_SENDING		6	

//--------
#define	AC_ELUX					0


#define TURN_ON					1
#define TURN_OFF				2

//---------
#define EnableTimer4Int()		TIMSK4 = 0x04;
#define DisableTimer4Int()		TIMSK4 = 0x00;

class IRRemoteSend
{
public:
	IRRemoteSend();
	
	void Begin();								
	void StartCommand(unsigned char AcType,unsigned char Command);						//call this function start to send the IR command	
	
	void ISRPrc();								//this sub function must be run in Timer4 ISR 
	
	unsigned char IRsending;
		
		
	
private:
	unsigned char PwmFreq;			//pwm signal
	unsigned char SendStatus;
	unsigned char MaxSendBit;
	unsigned char SendBit;
	unsigned char IsSecondFrame;		// 1 Second Frame
	
	
	
	unsigned char TxBuff[10];
	
	//---- width of the 
	unsigned char LeadCodeHighWidth;			//high is pwm on
	unsigned char LeadCodeLowWidth;				//low  is pwm off
	
	unsigned char BitCodeHighWidth;
	unsigned char Bit1CodeLowWidth;
	unsigned char Bit0CodeLowWidth;
	
	unsigned char EndCodeWidth;

	unsigned char InterMuteWidth;
	
	unsigned char TickCount;					//count each 64us
	unsigned char MaxCount;
	
	
	void PwmOn();
	void PwmOff();
	
	unsigned char SetTxData(unsigned char AcType,unsigned char ACCommand);				//set TxBuff and return Tx bits
	
	
};









#endif