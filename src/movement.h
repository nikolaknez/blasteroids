#ifndef MOVEMENT_H
#define MOVEMENT_H

void movement_calculate_2D_position (float *sx, float *sy, float heading, float speed);
void movement_teleport              (float *sx, float *sy);
bool movement_is_out_of_bounds      (float sx, float sy);

#endif /* movement.h */
