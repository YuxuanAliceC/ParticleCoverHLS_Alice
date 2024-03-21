#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#define MAX_NUM_POINTS 512
#define MAX_NUM_PATCHES 32
#define MAX_NUM_POINTS_IN_SUPERPOINT 16
#define MAX_POINTS_PER_LAYER 256

// ENVIRONMENT CONSTANTS
#define TOP_LAYER_LIM 100.0
#define BEAM_AXIS_LIM 15.0
#define NUM_LAYERS 5
#define RADII_INITIALIZER       \
  {                             \
    5.0, 10.0, 15.0, 20.0, 25.0 \
  }
#define TRAPEZOID_EDGES_INITIALIZER \
  {                                 \
    22, 29, 36, 43, 50              \
  }

const double RADII[] = {5.0, 10.0, 15.0, 20.0, 25.0};

// FILE READER CONSTANTS
#define MAX_NUM_EVENTS 8192

// DEBUG CONSTANTS
// green color for debug output
#define GREEN "\033[32m"

#endif