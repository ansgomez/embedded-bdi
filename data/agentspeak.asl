standard_mode_available.

+preserve_conditions : dark_inside <- !brighten.

+sunny_outside <- +eco_mode_available;!brighten.

+cloudy_outside <- -eco_mode_available;!brighten.

+!brighten: eco_mode_available <- raise_blinds.

+!brighten: standard_mode_available <- turn_on_lights.

