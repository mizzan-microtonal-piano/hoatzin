/*
 * midi.h
 *
 *  Created on: Jun 29, 2022
 *      Author: habiburrahman
 */

#ifndef MIDI_INC_MIDI_H_
#define MIDI_INC_MIDI_H_


#include <stdio.h>
#include <midi_typedef.h>


typedef struct{
	uint16_t (*tx_bytes)(uint8_t *data, uint16_t len);
	uint16_t (*rx_bytes)(uint8_t *data, uint16_t len);
}MIDI_t;







uint16_t midi_note_off(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity );
uint16_t midi_note_on(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity );
uint16_t midi_polyphonic_key_pressure(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t note,  uint8_t pressureValue);
uint16_t midi_control_change(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, MIDI_CONTROL_FUNCTION_t controllerNumber, uint8_t controllerValue);
uint16_t midi_program_change(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t programNumber);
uint16_t midi_channel_pressure(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t pressureValue);
uint16_t midi_pitch_bend_change(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value_msb,uint8_t value_lsb );



uint16_t midi_control_bankSelect(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_modulationWheel(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_breathController(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_footController(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_portamentoTime(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_dataEntry(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_channelVolume(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_balance(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_pan(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_expression(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_effect_1(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_effect_2(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_1(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_2(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_3(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_4(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb);

uint16_t midi_damperPedal(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t midi_portamento(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t midi_sostenuto(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t midi_softPedal(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t midi_legatoFootswitch(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);
uint16_t midi_hold_2(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t onOff);

uint16_t midi_soundController_1_soundVariation(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_2_timbre(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_3_releaseTime(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_4_attackTime(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_5_brightness(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_6_decayTime(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_1_VibratoRate(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_1_VibratoDepth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_soundController_1_VibratoDelay(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t midi_control_generalPurpose_5(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_6(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_7(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_generalPurpose_8(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t midi_control_portamentoControl(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_highResVelocityPrefix(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);


uint16_t midi_control_effect_1_depth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_effect_2_depth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_effect_3_depth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_effect_4_depth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);
uint16_t midi_control_effect_5_depth(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb);

uint16_t midi_dataIncrement(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_dataDecrement(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);


uint16_t midi_NRPN(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb );
uint16_t midi_RPN(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb );

uint16_t midi_mode_allSoundOff(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_mode_resetAllControllers(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_mode_localControl(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t onOff);
uint16_t midi_mode_allNotesOff(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_mode_OMNI_Off(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_mode_OMNI_On(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel);
uint16_t midi_mode_mono_On(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_mode_poly_On(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);

uint16_t midi_pitch_bend_sensitivity(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_channelFineTuning(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_channelCoarseTuning(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_tuningProgramChange(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_tuningPBankSelect(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_tuningModulationDepthRange(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);
uint16_t midi_MPEconfigMessage(MIDI_t *USBMIDI, MIDI_CHANNEL_t channel, uint8_t value);



#endif /* MIDI_INC_MIDI_H_ */


