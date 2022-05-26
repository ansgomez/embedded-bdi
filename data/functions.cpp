#include "functions.h"


bool eco_mode_available = false;
bool standard_mode_available = true;
bool dark_inside = true;
bool sunny_outside = true;
bool cloudy_outside = false;

/*---------------------------------------------------------------------------*/

bool action_turn_on_lights()
{
  //TODO: SEND BLE PACKET
  cout <<"**** ACTION **** Agent turn on lights..."<<endl;
  return true;
}

bool action_raise_blinds()
{
  //TODO: SEND BLE PACKET
  cout <<"**** ACTION **** Agent raises blinds..."<<endl;
  return true;
}

/*---------------------------------------------------------------------------*/

bool update_sunny_outside(bool var)
{
  //TODO: Update based on external ambient light sensor
  cout <<"Update sunny_outside"<<endl;

  //TODO: Is this the only way to do this? Shouldn't the belief update itself?
  if(sunny_outside == true) {
    eco_mode_available = true;
  }
  return sunny_outside;
}

bool update_cloudy_outside(bool var)
{
  //TODO: Update based on external ambient light sensor
  cout <<"Update cloudy_outside"<<endl;

  //TODO: Is this the only way to do this? Shouldn't the belief update itself?
  if(cloudy_outside == true) {
    eco_mode_available = false;
  }
  return cloudy_outside;
}

bool update_dark_inside(bool var)
{
  //TODO: Update based on internal ambient light sensor
  cout <<"Update dark_inside"<<endl;
  return dark_inside;
}

bool update_preserve_conditions(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  cout <<"Update preserve cond"<<endl;
  return true;
}

bool update_standard_mode_available(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  cout <<"Update std mode"<<endl;
  return standard_mode_available;
}

bool update_eco_mode_available(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  cout <<"Update eco mode"<<endl;
  return eco_mode_available;
}
