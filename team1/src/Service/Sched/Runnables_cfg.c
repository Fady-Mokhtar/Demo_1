// #include "Runnables_cfg.h"
// #include "Sched.h"

// extern void LCD_Task(void);
// extern void Switches_Of_Keypad(void);
// extern void Sec_Increment_Task_For_Date_Time(void);
// extern void Sec_Increment_Task_For_Stop_Watch(void);
// extern void Write_Date_Time_Task(void);
// extern void Get_Value_and_transmit_runnable(void);
// extern void Uart_receive_runnable(void);

// void Uart_transmit_runnable(void);

// // extern void Uart_receive_runnable();
// // extern void Uart_transmit_runnable();

// extern void keypad_runnable(void);

// void keypad_runnable(void);

// /*ARRAY FOR THE USER TO CONFIGURE THE RUNNABLES*/

// Runnable_t RunnableList[_Number_of_Runnables]=

// {
//  /* [Runnable_switch]=
//                     {
// 		             .Runnable_Name="switch runnable",
// 		             .PeriodicityMS=500,
// 					 .CB=RunnableSwitch,
// 					 .DelayMs=0,
//                     },
//  [Runnable_Led]=
// 					{
// 					 .Runnable_Name="Led runnable",
// 					 .PeriodicityMS=700,
// 					 .CB=RunnableSwitch,
// 					 .DelayMs=0,
// 					},
//  [Runnable_traffic]=
// 					{
// 					 .Runnable_Name="Traffic runnable",
// 					 .PeriodicityMS=2000,
// 					 .CB=RunnableTraffic,
// 					 .DelayMs=0,
// 					},*/
// 	[LCD_INIT_RUNNABLE] =
// 		{
// 			.Runnable_Name = "LCD_Init",
// 			.DelayMs = 0,
// 			.PeriodicityMS = 2,
			
// 			.CB = LCD_Task},

// 	[Write_Date_Time_Task_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Write_Date_Time_Task",
// 			.DelayMs = 50,
// 			.PeriodicityMS = 2,
			
// 			.CB = Write_Date_Time_Task},


// 	[Sec_Increment_Task_For_Date_Time_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Sec_Increment_Task_For_Date_Time",
// 			.DelayMs = 70,
// 			.PeriodicityMS = 1000,
// 			.CB = Sec_Increment_Task_For_Date_Time},

// 	[Keypad_Task_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Keypad_Task",
// 			.DelayMs = 150,
// 			.PeriodicityMS =10,
			
// 			.CB = keypad_runnable},

// 	[Sec_Increment_Task_For_Stop_Watch_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Sec_Increment_Task_For_Stop_Watch",
// 			.DelayMs = 350,
// 			.PeriodicityMS = 1000,
			
// 			.CB = Sec_Increment_Task_For_Stop_Watch},

// 	[Switches_Task_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Switches_Task",
// 			.DelayMs = 150,
// 			.PeriodicityMS = 200,
		
// 			.CB = Switches_Of_Keypad},
// 	[Uart_receive_task] =
// 		{
// 			.Runnable_Name = "Uart_receive_runnable",
// 			.DelayMs = 250,
// 			.PeriodicityMS = 250,

// 			.CB = Uart_receive_runnable},


// 	[Keypad_TRANSMIT_Task_RUNNABLE] =
// 		{
// 			.Runnable_Name = "Keypad_TRANSMIT_Task",
// 			.DelayMs = 200,
// 			.PeriodicityMS = 250,
			
// 			.CB = Get_Value_and_transmit_runnable},
// 	[Uart_transmit_task] =
// 		{
// 				.Runnable_Name = "Uart_transmit_runnable",
// 				.DelayMs = 200,
// 				.PeriodicityMS = 250,

// 				.CB = Uart_transmit_runnable},
// 				};
#include "Runnables_cfg.h"
#include "Sched.h"

extern void LCD_Task(void);
extern void Switches_Of_Keypad(void);
extern void Sec_Increment_Task_For_Date_Time(void);
extern void Sec_Increment_Task_For_Stop_Watch(void);
extern void Write_Date_Time_Task(void);
extern void Get_Value_and_transmit_runnable(void);
extern void Uart_receive_runnable(void);

void Uart_transmit_runnable(void);

// extern void Uart_receive_runnable();
// extern void Uart_transmit_runnable();

extern void keypad_runnable(void);

void keypad_runnable(void);

/*ARRAY FOR THE USER TO CONFIGURE THE RUNNABLES*/

Runnable_t RunnableList[_Number_of_Runnables]=

{
 /* [Runnable_switch]=
                    {
		             .Runnable_Name="switch runnable",
		             .PeriodicityMS=500,
					 .CB=RunnableSwitch,
					 .DelayMs=0,
                    },
 [Runnable_Led]=
					{
					 .Runnable_Name="Led runnable",
					 .PeriodicityMS=700,
					 .CB=RunnableSwitch,
					 .DelayMs=0,
					},
 [Runnable_traffic]=
					{
					 .Runnable_Name="Traffic runnable",
					 .PeriodicityMS=2000,
					 .CB=RunnableTraffic,
					 .DelayMs=0,
					},*/
	[LCD_INIT_RUNNABLE] =
		{
			.Runnable_Name = "LCD_Init",
			.DelayMs = 0,
			.PeriodicityMS = 2,
			
			.CB = LCD_Task},

	[Write_Date_Time_Task_RUNNABLE] =
		{
			.Runnable_Name = "Write_Date_Time_Task",
			.DelayMs = 50,
			.PeriodicityMS = 2,
			
			.CB = Write_Date_Time_Task},


	[Sec_Increment_Task_For_Date_Time_RUNNABLE] =
		{
			.Runnable_Name = "Sec_Increment_Task_For_Date_Time",
			.DelayMs = 70,
			.PeriodicityMS = 1000,
			.CB = Sec_Increment_Task_For_Date_Time},

	[Keypad_Task_RUNNABLE] =
		{
			.Runnable_Name = "Keypad_Task",
			.DelayMs = 150,
			.PeriodicityMS =10,
			
			.CB = keypad_runnable},

	[Sec_Increment_Task_For_Stop_Watch_RUNNABLE] =
		{
			.Runnable_Name = "Sec_Increment_Task_For_Stop_Watch",
			.DelayMs = 350,
			.PeriodicityMS = 1000,
			
			.CB = Sec_Increment_Task_For_Stop_Watch},

	[Switches_Task_RUNNABLE] =
		{
			.Runnable_Name = "Switches_Task",
			.DelayMs = 150,
			.PeriodicityMS = 200,
		
			.CB = Switches_Of_Keypad},
					[Uart_receive_task] =
		{
			.Runnable_Name = "Uart_receive_runnable",
			.DelayMs = 150,
			.PeriodicityMS = 150 ,

			.CB = Uart_receive_runnable},
		[Keypad_TRANSMIT_Task_RUNNABLE] =
		{
			.Runnable_Name = "Keypad_TRANSMIT_Task",
			.DelayMs = 152,
			.PeriodicityMS = 152,
			
			.CB = Get_Value_and_transmit_runnable}


	





	// [Uart_transmit_task] =
	// 	{
	// 			.Runnable_Name = "Uart_transmit_runnable",
	// 			.DelayMs = 250,
	// 			.PeriodicityMS = 250,

	// 			.CB = Uart_transmit_runnable},
				};