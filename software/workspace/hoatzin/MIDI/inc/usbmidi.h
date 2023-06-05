/*
 * usbmidi.h
 *
 *  Created on: Jun 23, 2022
 *      Author: habiburrahman
 */

#ifndef MIDI_INC_USBMIDI_H_
#define MIDI_INC_USBMIDI_H_

#include "midi_typedef.h"

typedef enum{
	CIN_MISC_FUNC_CODES = 0,
	CIN_CABLE_EVENTS = 1,
	CIN_TWO_BYTE_SYS_COMMON_MSG = 2,
	CIN_THREE_BYTE_SYS_COMMON_MSG = 3,
	CIN_SYSEX_STARTS_OR_CONT = 4,
	CIN_SINGLE_BYTE_SYS_COMMON_MSG = 5,
	CIN_SYSEX_ENDS_FOLLOWING_TWO_BYTES = 6,
	CIN_SYSEX_ENDS_FOLLOWING_THREE_BYTES = 7,
	CIN_NOTE_OFF = 8,
	CIN_NOTE_ON = 9,
	CIN_POLY_KEY_PRESS= 10,
	CIN_CONTROL_CHANGE = 11,
	CIN_PROGRAM_CHANGE = 12,
	CIN_CHANNEL_PRESSURE = 13,
	CIN_PITCHBEND_CHANGE = 14,
	CIN_SINGLE_BYTE = 15
}USBMIDI_CIN_t;


typedef struct{
	uint16_t (*tx_bytes)(uint8_t *data, uint16_t len);
	uint16_t (*rx_bytes)(uint8_t *data, uint16_t len);
	uint8_t CN; //cable number (virtual cable)
	USBMIDI_CIN_t CIN; //code index number
}USBMIDI_t;






uint16_t usbmidi_note_off(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity );
uint16_t usbmidi_note_on(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity );
uint16_t usbmidi_polyphonic_key_pressure(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note,  uint8_t pressureValue);
uint16_t usbmidi_control_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, MIDI_CONTROL_FUNCTION_t controllerNumber, uint8_t controllerValue);
uint16_t usbmidi_program_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t programNumber);
uint16_t usbmidi_channel_pressure(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t pressureValue);
uint16_t usbmidi_pitch_bend_change(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value_msb,uint8_t value_lsb );



uint16_t usbmidi_control_bankSelect(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_modulationWheel(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_breathController(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_footController(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_portamentoTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_dataEntry(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_channelVolume(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_balance(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_pan(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_expression(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_effect_1(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_effect_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_1(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_3(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_4(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);

uint16_t usbmidi_damperPedal(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t usbmidi_portamento(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t usbmidi_sostenuto(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t usbmidi_softPedal(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t usbmidi_legatoFootswitch(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t usbmidi_hold_2(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);

uint16_t usbmidi_soundController_1_soundVariation(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_2_timbre(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_3_releaseTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_4_attackTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_5_brightness(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_6_decayTime(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_1_VibratoRate(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_1_VibratoDepth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_soundController_1_VibratoDelay(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t usbmidi_control_generalPurpose_5(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_6(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_7(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_generalPurpose_8(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t usbmidi_control_portamentoControl(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_highResVelocityPrefix(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);


uint16_t usbmidi_control_effect_1_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_effect_2_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_effect_3_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_effect_4_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t usbmidi_control_effect_5_depth(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t usbmidi_dataIncrement(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_dataDecrement(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);


uint16_t usbmidi_NRPN(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb );
uint16_t usbmidi_RPN(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb );

uint16_t usbmidi_mode_allSoundOff(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_mode_resetAllControllers(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_mode_localControl(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t onOff);
uint16_t usbmidi_mode_allNotesOff(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_mode_OMNI_Off(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_mode_OMNI_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t usbmidi_mode_mono_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_mode_poly_On(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);

uint16_t usbmidi_pitch_bend_sensitivity(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_channelFineTuning(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_channelCoarseTuning(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_tuningProgramChange(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_tuningPBankSelect(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_tuningModulationDepthRange(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t usbmidi_MPEconfigMessage(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);









uint16_t usbmidi_registered_parameter_function(USBMIDI_t *USBMIDI, MIDI_CHANNEL_t channel, MIDI_REGISTERED_PARAMETER_FUNCTION_t rpf, uint8_t value);


uint16_t usbmidi_tx_bytes(USBMIDI_t *USBMIDI,uint8_t *data, uint16_t len );
uint16_t usbmidi_rx_bytes(USBMIDI_t *USBMIDI,uint8_t *data, uint16_t len );
uint16_t usbmidi_tx(USBMIDI_t *USBMIDI, uint8_t CN, USBMIDI_CIN_t CIN, uint8_t *midiData, uint16_t len);



#endif /* MIDI_INC_USBMIDI_H_ */
