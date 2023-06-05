/*
 * pedals.c
 *
 *  Created on: Dec 19, 2022
 *      Author: hr193
 */

#include "stm32l4xx_hal.h"
#include "pedals.h"
#include "main.h"
#include "midi.h"
#include "usbmidi.h"


extern MIDI_t MIDI1;
extern USBMIDI_t USBMIDI1;


int pedalPreviousStatus[3];
int pedalCurrentStatus[3];


void initializePedals(){

}
int readSustainPedal(){
	return HAL_GPIO_ReadPin(GPIOC, TRS1_T_Pin);
}
int readSustenotoPedal(){
	return HAL_GPIO_ReadPin(GPIOC, TRS1_R_Pin);
}
int readSoftPedal(){

	return HAL_GPIO_ReadPin(GPIOC, TRS2_T_Pin);
}


void scanPedals(){
	pedalCurrentStatus[0] = readSustainPedal();
	pedalCurrentStatus[1] = readSustenotoPedal();
	pedalCurrentStatus[2] = readSoftPedal();


	if(pedalPreviousStatus[0] == 0  && pedalCurrentStatus[0] == 1){
		usbmidi_damperPedal(&USBMIDI1,  CHANNEL_1,1);
		midi_damperPedal(&MIDI1,  CHANNEL_1,1);


	}else if(pedalPreviousStatus[0] == 1  && pedalCurrentStatus[0] == 0){
		usbmidi_damperPedal(&USBMIDI1,  CHANNEL_1,0);
		midi_damperPedal(&MIDI1,  CHANNEL_1,0);
	}

	pedalPreviousStatus[0] = pedalCurrentStatus[0];


	if(pedalPreviousStatus[1] == 0  && pedalCurrentStatus[1] == 1){
		usbmidi_sostenuto(&USBMIDI1,  CHANNEL_1,1);
		midi_sostenuto(&MIDI1, CHANNEL_1 , 1);
	}else if(pedalPreviousStatus[1] == 1  && pedalCurrentStatus[1] == 0){
		usbmidi_sostenuto(&USBMIDI1,  CHANNEL_1,0);
		midi_sostenuto(&MIDI1, CHANNEL_1 , 0);
	}

	pedalPreviousStatus[1] = pedalCurrentStatus[1];



	if(pedalPreviousStatus[2] == 0  && pedalCurrentStatus[2] == 1){
		usbmidi_softPedal(&USBMIDI1,  CHANNEL_1,1);
		midi_softPedal(&MIDI1, CHANNEL_1 ,1);
	}else if(pedalPreviousStatus[2] == 1  && pedalCurrentStatus[2] == 0){
		usbmidi_softPedal(&USBMIDI1,  CHANNEL_1,0);
		midi_softPedal(&MIDI1, CHANNEL_1 ,0);
	}

	pedalPreviousStatus[2] = pedalCurrentStatus[2];



}
