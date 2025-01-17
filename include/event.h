#ifndef __EVENT_H__
#define __EVENT_H__

#include "constants.h"
#include "environment.h"
#include "point.h"
#include <iostream>

typedef struct {
  environment_s env;
  point_s list_of_points[MAX_NUM_POINTS];
  size_t num_points; // inits to 0
} event_s;

event_s event_init(environment_s env, point_s list_of_points[],
                   size_t num_points);

// DEBUG FUNCTION
std::ostream &operator<<(std::ostream &os, const event_s &e);

#endif