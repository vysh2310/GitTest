/**
  * Polyspace example.
  *       Copyright 2012-2013 The MathWorks, Inc.Things to test
  */

#include <assert.h>
#include <math.h>
#include "include.h"


/* Internal functions        */
/* Needed for MISRA-rule 8.1 */
static int get_oil_pressure(void);
void Pointer_Arithmetic(void);
extern int get_bus_status(void);

void unreachable_code(void)
{
    int i;
    
	i = get_bus_status();
}

static int get_oil_pressure(void)
{
    int i;
    
	i = get_bus_status();
	
	if (i < 1)
	{
		i = 1;
	}
	    
    return i-1;
}

/* Here we demonstrate Polyspace Verifier's ability to track a
   pointer across numerous pointer arithmetic operations,
   including invalid addresses and back to valid addresses.
*/
void Pointer_Arithmetic(void)
{
    int array[100];
    int i, *p = array;

    for (i = 0; i < 100; i++) {
        *p = 0;
        p++;
    }

    if (get_bus_status() > 0) {
        if (get_oil_pressure() > 0) {
            *p = 5; /* Out of bounds */
        } else {
            i++;
            unreachable_code();
        }
    }
	
    i = get_bus_status();
	
    if (i >= 0) {
        *(p - i) = 10;
    }
}
