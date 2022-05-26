#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unistd.h>

// sucks dirty space
bool action_turn_on_lights();

bool action_raise_blinds();

bool update_sunny_outside(bool var);

bool update_cloudy_outside(bool var);

bool update_dark_inside(bool var);

bool update_standard_mode_available(bool var);

bool update_eco_mode_available(bool var);

bool update_preserve_conditions(bool var);

#endif /* FUNCTIONS_H_ */