/**
  * Polyspace example.
  * This file defines the high-level procedures for the tasking examples.Tasking
  *       Copyright 2012-2013 The MathWorks, Inc.
  */

#ifndef INCLUDE_H
#define INCLUDE_H

#define true 1
#define false 0

#define checksum 1
#define new_move 0
#define previous_move 1

#define MAX_SIZE 10


/* automatically stubbed functions */
extern void SEND_MESSAGE(int status, const char* message);
extern int read_bus_status(void);
extern int error_on_bus(void);
extern int read_on_bus(void);

/* internal functions */
int    random_int(void);
float  random_float(void);
extern void Pointer_Arithmetic(void);
extern int  tab[MAX_SIZE];
extern int  PowerLevel;
extern int  first_paiload;
extern int  second_paiload;
extern int* arr;

#endif
