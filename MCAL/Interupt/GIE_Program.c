/*
 * GIE_Program.c
 *
 *  Created on: Aug 16, 2021
 *      Author: gerges
 */

#include"STD_TB.h"
#include"MATH.h"

#include"GIE_Interface.h"
#include"GIE_Register.h"

void GIE_voidEnableGlobal(void)
{
	/*1- By C language*/
	SET_BIT(SREG,SREG_I);
	/*2- By Assembly*/
	/*__asm volatile("SEI");*/
}
void GIE_voidDisableGlobal(void)
{
	/*1- By C language*/
	CLR_BIT(SREG,SREG_I);
	/*2- By Assembly*/
	/*__asm volatile("CLI")*/
}
