#include "types.h"

void extruder_init(void);

/* rate must range from -255 to 255 inclusive */
void extruder_set_rate(const int16_t rate);

void extruder_set_temp(const uint16_t celsius);
uint16_t extruder_get_temp(void);


