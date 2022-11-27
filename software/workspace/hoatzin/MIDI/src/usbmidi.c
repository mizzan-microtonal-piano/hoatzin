/*
 * usbmidi.c
 *
 *  Created on: Jun 23, 2022
 *      Author: habiburrahman
 */

#include <stdio.h>
#include "usbmidi.h"




uint16_t usbmidi_note_off(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity ){
	uint8_t midiData[3];

	midiData[0] = NOTE_OFF + channel;
	midiData[1] = note;
	midiData[2] = velocity;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_NOTE_OFF, midiData, 3);

}
uint16_t usbmidi_note_on(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity ){
	uint8_t midiData[3];

	midiData[0] = NOTE_ON + channel;
	midiData[1] = note;
	midiData[2] = velocity;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_NOTE_ON, midiData, 3);
}
uint16_t usbmidi_polyphonic_key_pressure(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note,  uint8_t pressureValue){
	uint8_t midiData[3];
	midiData[0] = POLY_AFTERTOUCH + channel;
	midiData[1] = note;
	midiData[2] = pressureValue;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_POLY_KEY_PRESS, midiData, 3);

}
uint16_t usbmidi_control_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, MIDI_CONTROL_FUNCTION_t controllerNumber, uint8_t controllerValue){
	uint8_t midiData[3];
	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = controllerNumber;
	midiData[2] = controllerValue;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_CONTROL_CHANGE, midiData, 3);

}
uint16_t usbmidi_program_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t programNumber){
	uint8_t midiData[2];
	midiData[0] = PROGRAM_CHANGE + channel;
	midiData[1] = programNumber;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_PROGRAM_CHANGE, midiData, 3);
}
uint16_t usbmidi_channel_pressure(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t pressureValue){
	uint8_t midiData[2];
	midiData[0] = AFTERTOUCH + channel;
	midiData[1] = pressureValue;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_CHANNEL_PRESSURE, midiData, 3);

}
uint16_t usbmidi_pitch_bend_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value_msb,uint8_t value_lsb ){
	uint8_t midiData[3];
	midiData[0] = PITCHBEND_CHANGE + channel;
	midiData[1] = value_lsb;
	midiData[2] = value_msb;

	usbmidi_tx(USBMIDI, USBMIDI->CN, CIN_PITCHBEND_CHANGE, midiData, 3);
}


/*-----------------------------------------------------------------------------*/



uint16_t usbmidi_control_bankSelect(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_modulationWheel(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_breathController(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_footController(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_portamentoTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_dataEntry(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_channelVolume(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_balance(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_pan(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_expression(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_1(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_1(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_3(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_4(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){}

uint16_t usbmidi_damperPedal(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	usbmidi_control_change(USBMIDI, channel, SUSTAIN_ON_OFF , onOff );
}
uint16_t usbmidi_portamento(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	usbmidi_control_change(USBMIDI, channel, PORTAMENTO_ON_OFF , onOff );
}
uint16_t usbmidi_sostenuto(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	usbmidi_control_change(USBMIDI, channel, SOSTUNUTO_ON_OFF , onOff );
}
uint16_t usbmidi_softPedal(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	usbmidi_control_change(USBMIDI, channel, SOFT_PEDAL_ON_OFF , onOff );
}
uint16_t usbmidi_legatoFootswitch(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	usbmidi_control_change(USBMIDI, channel, LEGATO_FOOTSWITCH , onOff );
}
uint16_t usbmidi_hold_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff){}

uint16_t usbmidi_soundController_1_soundVariation(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_2_timbre(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_3_releaseTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_4_attackTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_5_brightness(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_6_decayTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_1_VibratoRate(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_1_VibratoDepth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_soundController_1_VibratoDelay(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}

uint16_t usbmidi_control_generalPurpose_5(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_6(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_7(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_generalPurpose_8(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}

uint16_t usbmidi_control_portamentoControl(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_highResVelocityPrefix(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}


uint16_t usbmidi_control_effect_1_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_2_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_3_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_4_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}
uint16_t usbmidi_control_effect_5_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){}

uint16_t usbmidi_dataIncrement(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_dataDecrement(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}


uint16_t usbmidi_NRPN(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb ){}
uint16_t usbmidi_RPN(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb ){}

uint16_t usbmidi_mode_allSoundOff(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_mode_resetAllControllers(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_mode_localControl(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t onOff){}
uint16_t usbmidi_mode_allNotesOff(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_mode_OMNI_Off(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_mode_OMNI_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel){}
uint16_t usbmidi_mode_mono_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_mode_poly_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}

uint16_t usbmidi_pitch_bend_sensitivity(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_channelFineTuning(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_channelCoarseTuning(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_tuningProgramChange(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_tuningPBankSelect(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_tuningModulationDepthRange(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t usbmidi_MPEconfigMessage(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value){}






uint16_t usbmidi_registered_parameter_function(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, MIDI_REGISTERED_PARAMETER_FUNCTION_t rpf, uint8_t value){

	uint8_t midiData[3];
	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = RPN_MSB;
	midiData[2] = (rpf>>8)&0x7F;
	usbmidi_tx(USBMIDI, USBMIDI->CN, USBMIDI->CIN, midiData, 3);

	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = RPN_LSB;
	midiData[2] = (rpf)&0x7F;
	usbmidi_tx(USBMIDI, USBMIDI->CN, USBMIDI->CIN, midiData, 3);

	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = DATA_ENTRY_MSB;
	midiData[2] = value;
	usbmidi_tx(USBMIDI, USBMIDI->CN, USBMIDI->CIN, midiData, 3);

	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = RPN_LSB;
	midiData[2] = 0x7F;
	usbmidi_tx(USBMIDI, USBMIDI->CN, USBMIDI->CIN, midiData, 3);

	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = RPN_MSB;
	midiData[2] = 0x7F;
	usbmidi_tx(USBMIDI, USBMIDI->CN, USBMIDI->CIN, midiData, 3);

	return 15;

}



/*-----------------------------------------------------------------------------*/




uint16_t usbmidi_tx_bytes(USBMIDI_t *USBMIDI,uint8_t *data, uint16_t len ){
	return USBMIDI->tx_bytes(data,len);


}
uint16_t usbmidi_rx_bytes(USBMIDI_t *USBMIDI,uint8_t *data, uint16_t len ){
	return USBMIDI->rx_bytes(data,len);
}

uint16_t usbmidi_tx(USBMIDI_t *USBMIDI, uint8_t CN, USBMIDI_CIN_t CIN, uint8_t *midiData, uint16_t len){
	uint8_t data[4];

	data[0] = (CN << 4 | CIN);

	switch (CIN){
	case	CIN_MISC_FUNC_CODES: break;
	case	CIN_CABLE_EVENTS: break;
	case	CIN_TWO_BYTE_SYS_COMMON_MSG:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_THREE_BYTE_SYS_COMMON_MSG:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_SYSEX_STARTS_OR_CONT:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_SINGLE_BYTE_SYS_COMMON_MSG:
		data[1] = midiData[0];
		data[2] = 0x00;
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_SYSEX_ENDS_FOLLOWING_TWO_BYTES:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_SYSEX_ENDS_FOLLOWING_THREE_BYTES:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_NOTE_OFF:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_NOTE_ON:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_POLY_KEY_PRESS:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_CONTROL_CHANGE:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_PROGRAM_CHANGE:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_CHANNEL_PRESSURE:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_PITCHBEND_CHANGE:
		data[1] = midiData[0];
		data[2] = midiData[1];
		data[3] = midiData[2];
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	case	CIN_SINGLE_BYTE:
		data[1] = midiData[0];
		data[2] = 0x00;
		data[3] = 0x00;
		usbmidi_tx_bytes(USBMIDI,data, 4 );
		break;
	default: break;

	}

}




