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
  std::cout <<"**** ACTION **** Agent turn on lights..."<<std::endl;
  return true;
}

bool action_raise_blinds()
{
  //TODO: SEND BLE PACKET
  std::cout <<"**** ACTION **** Agent raises blinds..."<<std::endl;
  return true;
}

/*---------------------------------------------------------------------------*/

bool update_sunny_outside(bool var)
{
  //TODO: Update based on external ambient light sensor
  std::cout <<"Update sunny_outside"<<std::endl;

  //TODO: Is this the only way to do this? Shouldn't the belief update itself?
  //if(sunny_outside == true) {
  //  eco_mode_available = true;
  //}
  return sunny_outside;
}

bool update_cloudy_outside(bool var)
{
  //TODO: Update based on external ambient light sensor
  std::cout <<"Update cloudy_outside"<<std::endl;

  //TODO: Is this the only way to do this? Shouldn't the belief update itself?
  //if(cloudy_outside == true) {
  //  eco_mode_available = false;
  //}
  return cloudy_outside;
}

bool update_dark_inside(bool var)
{
  //TODO: Update based on internal ambient light sensor
  std::cout <<"Update dark_inside"<<std::endl;
  return dark_inside;
}

/*
bool update_preserve_conditions(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  std::cout <<"Update preserve cond"<<std::endl;
  return true;
}
*/
/*
bool update_standard_mode_available(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  std::cout <<"Update std mode"<<std::endl;
  return standard_mode_available;
}
*/

/*
bool update_eco_mode_available(bool var)
{
  //TODO: Unsure why I need this, isn't it a plan? 
  std::cout <<"Update eco mode"<<std::endl;
  return eco_mode_available;
}
*/
