#pragma once

#include "constants.h"
#include "cover.h"
#include "dataset.h"
#include "environment.h"
#include "event.h"
#include "file_reader.h"
#include "patch.h"
#include "patch_buffer.h"
#include "point.h"
#include "sim_utils.h"
#include "superpoint.h"

// void system_top(cover_s *cover_result);
void system_top(cover_s *cover,
                point_s row_data[NUM_LAYERS][MAX_POINTS_PER_LAYER],
                int num_points[NUM_LAYERS]);