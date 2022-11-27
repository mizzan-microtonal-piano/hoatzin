/*
 * midi.c
 *
 *  Created on: Jun 29, 2022
 *      Author: habiburrahman
 */

#include <midi.h>


uint16_t midi_note_off(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity ){
	uint8_t midiData[3];
	midiData[0] = NOTE_OFF + channel;
	midiData[1] = note;
	midiData[2] = velocity;
	return MIDI->tx_bytes(midiData, 3);
}
uint16_t midi_note_on(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t note, uint8_t velocity ){
	uint8_t midiData[3];
	midiData[0] = NOTE_ON + channel;
	midiData[1] = note;
	midiData[2] = velocity;
	return MIDI->tx_bytes(midiData, 3);
}
uint16_t midi_polyphonic_key_pressure(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t note,  uint8_t pressureValue){
	uint8_t midiData[3];
	midiData[0] = POLY_AFTERTOUCH + channel;
	midiData[1] = note;
	midiData[2] = pressureValue;
	return MIDI->tx_bytes(midiData, 3);
}
uint16_t midi_control_change(MIDI_t *MIDI, MIDI_CHANNEL_t channel, MIDI_CONTROL_FUNCTION_t controllerNumber, uint8_t controllerValue){
	uint8_t midiData[3];
	midiData[0] = MODE_CHANGE + channel;
	midiData[1] = controllerNumber;
	midiData[2] = controllerValue;
	return MIDI->tx_bytes(midiData, 3);
}
uint16_t midi_program_change(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t programNumber){
	uint8_t midiData[2];
	midiData[0] = PROGRAM_CHANGE + channel;
	midiData[1] = programNumber;
	return MIDI->tx_bytes(midiData, 2);
}
uint16_t midi_channel_pressure(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t pressureValue){
	uint8_t midiData[2];
	midiData[0] = AFTERTOUCH + channel;
	midiData[1] = pressureValue;
	return MIDI->tx_bytes(midiData, 2);
}
uint16_t midi_pitch_bend_change(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value_msb,uint8_t value_lsb ){
	uint8_t midiData[3];
	midiData[0] = PITCHBEND_CHANGE + channel;
	midiData[1] = value_lsb;
	midiData[2] = value_msb;
	return MIDI->tx_bytes(midiData, 3);
}



uint16_t midi_control_bankSelect(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, BANK_SELECT_MSB , value_msb );
	midi_control_change(MIDI, channel, BANK_SELECT_LSB , value_lsb );
}
uint16_t midi_control_modulationWheel(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, MODULATION_WHEEL_MSB , value_msb );
	midi_control_change(MIDI, channel, MODULATION_WHEEL_LSB , value_lsb );
}
uint16_t midi_control_breathController(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, BREATH_CONTROLLER_MSB , value_msb );
	midi_control_change(MIDI, channel, BREATH_CONTROLLER_LSB , value_lsb );
}
uint16_t midi_control_footController(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, FOOT_CONTROLLER_MSB , value_msb );
	midi_control_change(MIDI, channel, FOOT_CONTROLLER_LSB , value_lsb );
}
uint16_t midi_control_portamentoTime(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, PORTAMENTO_TIME_MSB , value_msb );
	midi_control_change(MIDI, channel, PORTAMENTO_TIME_LSB , value_lsb );
}
uint16_t midi_control_dataEntry(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, DATA_ENTRY_MSB , value_msb );
	midi_control_change(MIDI, channel, DATA_ENTRY_LSB , value_lsb );
}
uint16_t midi_control_channelVolume(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, CHANNEL_VOLUME_MSB , value_msb );
	midi_control_change(MIDI, channel, CHANNEL_VOLUME_LSB , value_lsb );
}
uint16_t midi_control_balance(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, BALANCE_MSB , value_msb );
	midi_control_change(MIDI, channel, BALANCE_LSB , value_lsb );
}
uint16_t midi_control_pan(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, PAN_MSB , value_msb );
	midi_control_change(MIDI, channel, PAN_LSB , value_lsb );
}
uint16_t midi_control_expression(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EXPRESSION_CONTROL_MSB , value_msb );
	midi_control_change(MIDI, channel, EXPRESSION_CONTROL_MSB , value_lsb );
}
uint16_t midi_control_effect_1(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_CONTROL_1_MSB , value_msb );
	midi_control_change(MIDI, channel, EFFECT_CONTROL_1_LSB , value_lsb );
}
uint16_t midi_control_effect_2(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_CONTROL_2_MSB , value_msb );
	midi_control_change(MIDI, channel, EFFECT_CONTROL_2_LSB , value_lsb );
}
uint16_t midi_control_generalPurpose_1(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_1_MSB , value_msb );
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_1_LSB , value_lsb );
}
uint16_t midi_control_generalPurpose_2(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_2_MSB , value_msb );
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_2_LSB , value_lsb );
}
uint16_t midi_control_generalPurpose_3(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_3_MSB , value_msb );
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_3_LSB , value_lsb );
}
uint16_t midi_control_generalPurpose_4(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_4_MSB , value_msb );
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_4_LSB , value_lsb );
}






uint16_t midi_damperPedal(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, SUSTAIN_ON_OFF , onOff );
}
uint16_t midi_portamento(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, PORTAMENTO_ON_OFF , onOff );
}
uint16_t midi_sostenuto(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, SOSTUNUTO_ON_OFF , onOff );
}
uint16_t midi_softPedal(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, SOFT_PEDAL_ON_OFF , onOff );
}
uint16_t midi_legatoFootswitch(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, LEGATO_FOOTSWITCH , onOff );
}
uint16_t midi_hold_2(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t onOff){
	midi_control_change(MIDI, channel, HOLD_2 , onOff );
}




uint16_t midi_soundController_1_soundVariation(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_SOUND_VARIATION , value_lsb );
}
uint16_t midi_soundController_2_timbre(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_TIMBRE , value_lsb );
}
uint16_t midi_soundController_3_releaseTime(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_RELEASE_TIME , value_lsb );
}
uint16_t midi_soundController_4_attackTime(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_ATTACK_TIME , value_lsb );
}
uint16_t midi_soundController_5_brightness(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_BRIGHTNESS , value_lsb );
}
uint16_t midi_soundController_6_decayTime(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_DECAY_TIME , value_lsb );
}
uint16_t midi_soundController_1_VibratoRate(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_VIBRATO_RATE , value_lsb );
}
uint16_t midi_soundController_1_VibratoDepth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_VIBRATO_DEPTH , value_lsb );
}
uint16_t midi_soundController_1_VibratoDelay(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, SOUND_CONTROLLER_VIBRATO_DELAY , value_lsb );
}

uint16_t midi_control_generalPurpose_5(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_5 , value_lsb );
}
uint16_t midi_control_generalPurpose_6(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_6 , value_lsb );
}
uint16_t midi_control_generalPurpose_7(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_7 , value_lsb );
}
uint16_t midi_control_generalPurpose_8(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, GENERAL_PURPOSE_CONTROLLER_8 , value_lsb );
}

uint16_t midi_control_portamentoControl(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, PORTAMENTO_CONTROL , value_lsb );
}
uint16_t midi_control_highResVelocityPrefix(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, HIGH_RESOLUTION_VELOCITY_PREFIX , value_lsb );
}


uint16_t midi_control_effect_1_depth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_1_DEPTH , value_lsb );
}
uint16_t midi_control_effect_2_depth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_2_DEPTH , value_lsb );
}
uint16_t midi_control_effect_3_depth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_3_DEPTH , value_lsb );
}
uint16_t midi_control_effect_4_depth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_4_DEPTH , value_lsb );
}
uint16_t midi_control_effect_5_depth(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_lsb){
	midi_control_change(MIDI, channel, EFFECT_5_DEPTH , value_lsb );
}

uint16_t midi_dataIncrement(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, DATA_INCREMENT , 0 );
}
uint16_t midi_dataDecrement(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, DATA_DECREMENT , 0 );
}


uint16_t midi_NRPN(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb ){
	midi_control_change(MIDI, channel, NRPN_LSB , value_lsb );
	midi_control_change(MIDI, channel, NRPN_MSB , value_msb );
}
uint16_t midi_RPN(MIDI_t *MIDI, MIDI_CHANNEL_t channel,uint8_t value_msb,uint8_t value_lsb ){
	midi_control_change(MIDI, channel, RPN_LSB , value_lsb );
	midi_control_change(MIDI, channel, RPN_MSB , value_msb );
}

uint16_t midi_mode_allSoundOff(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, ALL_SOUND_OFF , 0 );
}
uint16_t midi_mode_resetAllControllers(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, RESET_ALL_CONTROLLERS , 0 );
}
uint16_t midi_mode_localControl(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t onOff){
	midi_control_change(MIDI, channel, LOCAL_CONTROL_ON_OFF , onOff );
}
uint16_t midi_mode_allNotesOff(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, ALL_NOTES_OFF , 0 );
}
uint16_t midi_mode_OMNI_Off(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, OMNI_MODE_OFF , 0 );
}
uint16_t midi_mode_OMNI_On(MIDI_t *MIDI, MIDI_CHANNEL_t channel){
	midi_control_change(MIDI, channel, OMNI_MODE_ON , 0 );
}
uint16_t midi_mode_mono_On(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){
	midi_control_change(MIDI, channel, MONO_MODE_ON , 0 );
}
uint16_t midi_mode_poly_On(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){
	midi_control_change(MIDI, channel, POLY_MODE_ON , 0 );
}

uint16_t midi_pitch_bend_sensitivity(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_channelFineTuning(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_channelCoarseTuning(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_tuningProgramChange(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_tuningPBankSelect(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_tuningModulationDepthRange(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
uint16_t midi_MPEconfigMessage(MIDI_t *MIDI, MIDI_CHANNEL_t channel, uint8_t value){}
