/*
 * fatar_typedef.h
 *
 *  Created on: Nov 27, 2022
 *      Author: hr193
 */

#ifndef FATAR_TYPEDEF_H_
#define FATAR_TYPEDEF_H_

typedef struct{
	uint16_t (*tx_bytes)(uint8_t *data, uint16_t len);
	uint16_t (*rx_bytes)(uint8_t *data, uint16_t len);
}FATAR_GPIO_t;


#endif /* FATAR_TYPEDEF_H_ */
