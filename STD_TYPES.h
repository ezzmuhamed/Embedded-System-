/*
 * STD_TYPES.h
 *
 *  Created on: 02/08/2019
 *      Author: Ezzeldin Muhammed
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/* Boolean types */
typedef unsigned char bool;

#ifndef TRUE
#define TRUE	 	(1u)
#endif

#ifndef FALSE
#define FALSE	 	(0u)
#endif

#define HIGH		(1u)
#define LOW			(0u)

#define INPUT       (0u)
#define OUTPUT      (1u)

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long  int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long  int s32;

typedef float  f32;
typedef double f64;

typedef union{
	u8 reg;
	struct{
		u8 BIT0 : 1;
		u8 BIT1 : 1;
		u8 BIT2 : 1;
		u8 BIT3 : 1;
		u8 BIT4 : 1;
		u8 BIT5 : 1;
		u8 BIT6 : 1;
		u8 BIT7 : 1;
	}Bits;
}Register;

#endif /* STD_TYPES_H_ */
