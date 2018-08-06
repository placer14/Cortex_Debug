# Cortex_Debug
Macros to easiy turn on and off debugging.

# Usage

Turn on debugging:

```
#define CORTEX_DEBUG 1
#include "Cortex_Debug.h"

CORTEX_DEBUG_PRINTLN("DEBUG OUTPUT")
```

To disable bugging, set `CORTEX_DEBUG` to 0:

```
#define CORTEX_DEBUG 0
#include "Cortex_Debug.h"

CORTEX_DEBUG_PRINTLN("DEBUG OUTPUT")
```
