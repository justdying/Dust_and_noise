#ifndef __Init_IO_H
#define __Init_IO_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/2
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
#define LED0 PAout(15)// PB5
//#define RELAY_PHOTO_BUTTON PCout(0)// PC0
//#define RELAY1 PCout(1)// PB5
//#define RELAY2 PCout(2)// PB5
void LED_Init(void);//初始化
//void RELAY_Init(void);//初始化继电器
		 				    
#endif
