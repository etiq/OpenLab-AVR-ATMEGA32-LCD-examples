/*
 * main.c
 *
 * Created: 3/29/2016 9:46:10 AM
 * Author : Etiq Technologies
 */ 
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

int main(void)
{
	lcd_init();
	while(1)
	{
	CMD(0x80);
	StringData("Etiq");
	CMD(0xC0);
	StringData("Technologies");
	}
}