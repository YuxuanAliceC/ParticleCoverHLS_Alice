#ifndef __SUPERPOINT_H__
#define __SUPERPOINT_H__

#include "constants.h"
#include "point.h"

typedef struct {
  point_s points[MAX_NUM_POINTS_IN_SUPERPOINT];
  size_t n_points;
  float z_values[MAX_NUM_POINTS_IN_SUPERPOINT];
  float min;
  float max;
} superpoint_s;

superpoint_s superpoint_init(point_s *points, size_t n_points);

bool superpoint_eq(superpoint_s sp1, superpoint_s sp2);

// DEBUG FUNCTION
std::ostream &operator<<(std::ostream &os, const superpoint_s &sp);

#endif // __SUPERPOINT_H__