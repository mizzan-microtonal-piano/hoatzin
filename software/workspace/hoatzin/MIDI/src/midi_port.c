/*
 * usbmidi1_port.c
 *
 *  Created on: Jun 22, 2022
 *      Author: habiburrahman
 */


#include <stdio.h>
#include "stm32l4xx_hal.h"
#include "usb_device.h"
#include "usbd_midi_if.h"

#include "usbmidi.h"
#include "midi.h"
#include "usbmidi.h"





uint16_t _usbmidi_port_tx_bytes(uint8_t *data, uint16_t len);
uint16_t _usbmidi_port_rx_bytes(uint8_t *data, uint16_t len);
uint16_t _uartmidi_port_tx_bytes(uint8_t *data, uint16_t len);
uint16_t _uartmidi_port_rx_bytes(uint8_t *data, uint16_t len);
//uint16_t _midi_port_tx_bytes(uint8_t *data, uint16_t len);
//uint16_t _midi_port_rx_bytes(uint8_t *data, uint16_t len);

USBMIDI_t USBMIDI1 = {
		_usbmidi_port_tx_bytes,
		_usbmidi_port_rx_bytes,
		0
};

MIDI_t MIDI1 = {
		_uartmidi_port_tx_bytes,
		_uartmidi_port_rx_bytes
};

extern UART_HandleTypeDef huart2;


uint16_t _usbmidi_port_tx_bytes(uint8_t *data, uint16_t len){
	MIDI_DataTx(data, len);
	HAL_Delay(0); // for some reason this is needed. Will investigate later.
	// Maybe problem with time-stamping.
	//can also use a FIFO and send multiple packets at once.
	//This will also ensure time-stamp is same for all packets sent at once.

	return 0;
}
uint16_t _usbmidi_port_rx_bytes(uint8_t *data, uint16_t len){
	MIDI_DataRx(data, len);
	return 0;
}


uint16_t _uartmidi_port_tx_bytes(uint8_t *data, uint16_t len){
	HAL_UART_Transmit(&huart2, data, len, 100);
	return 0;
}
uint16_t _uartmidi_port_rx_bytes(uint8_t *data, uint16_t len){
	return 0;
}


/*
uint16_t _midi_port_tx_bytes(uint8_t *data, uint16_t len){
	usbmidi_tx(&USBMIDI1 , 0, CIN_THREE_BYTE_SYS_COMMON_MSG , data, len);
}
uint16_t _midi_port_rx_bytes(uint8_t *data, uint16_t len){

}
*/
