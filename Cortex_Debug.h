/********
  Cortex Debug methods
  version 0.1

  Written by Mike Greenberg <mg@nobulb.com>
  All rights reserved.
  (c) 2016
********/
#ifndef _CORTEX_DEBUG_H
#define _CORTEX_DEBUG_H

#if CORTEX_DEBUG
  #define CORTEX_DEBUG_PRINTER Serial
  #define CORTEX_DEBUG_PRINT(...) { CORTEX_DEBUG_PRINTER.print(__VA_ARGS__); }
  #define CORTEX_DEBUG_PRINTLN(...) { CORTEX_DEBUG_PRINTER.println(__VA_ARGS__); }
  #define CORTEX_DEBUG_BEGIN() { CORTEX_DEBUG_PRINTER.begin(9600); while(!CORTEX_DEBUG_PRINTER){;} CORTEX_DEBUG_PRINTLN(F("Debugger started...")); }
#else
  #define CORTEX_DEBUG 0
  #define CORTEX_DEBUG_PRINT(...) ""
  #define CORTEX_DEBUG_PRINTLN(...) ""
  #define CORTEX_DEBUG_BEGIN(...) ""
#endif //CORTEX_DEBUG

#endif //_CORTEX_DEBUG_H
