#ifndef __PATCH_H__
#define __PATCH_H__

#include "constants.h"
#include "environment.h"
#include "superpoint.h"

#include <cstddef>

typedef struct {
  environment_s env;
  int end_layer;
  int left_end_layer;
  int right_end_layer;
  int left_end_lambdaZ;
  int right_end_lambdaZ;
  double apexZ0;

  int shadow_fromTopToInnermost_topL_jL;
  int shadow_fromTopToInnermost_topL_jR;
  int shadow_fromTopToInnermost_topR_jL;
  int shadow_fromTopToInnermost_topR_jR;

  superpoint_s superpoints[NUM_LAYERS]; // TODO: figure out correct size
  size_t n_superpoints;
} patch_s;

patch_s patch_init(environment_s env, superpoint_s *superpoints, double apexZ0);

// DEBUG FUNCTION
std::ostream &operator<<(std::ostream &os, const patch_s &p);

#endif // __PATCH_H__