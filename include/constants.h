#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#define MAX_NUM_POINTS 512
#define MAX_NUM_PATCHES 32
#define MAX_NUM_POINTS_IN_SUPERPOINT 32

// ENVIRONMENT CONSTANTS
#define TOP_LAYER_LIM 100.0
#define BEAM_AXIS_LIM 15.0
#define NUM_LAYERS 5

const double RADII[] = {5.0, 10.0, 15.0, 20.0, 25.0};

// FILE READER CONSTANTS
#define MAX_NUM_EVENTS 8192

// DEBUG CONSTANTS
// green color for debug output
#define GREEN "\033[32m"

#endif