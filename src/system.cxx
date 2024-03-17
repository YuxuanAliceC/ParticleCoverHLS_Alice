
#include "system.h"

#include <iostream>
#include <stdlib.h>

void system_top(cover_s *cover,
                point_s row_data[NUM_LAYERS][MAX_POINTS_PER_LAYER],
                int num_points[NUM_LAYERS]) {
  patch_buffer_init(&cover->patch_buffer);
  cover_make_patch_aligned_to_line(cover, row_data, num_points);

  return;
}

// dummy main function
int main(void) {
  std::cerr << "This is a dummy main function" << std::endl;
  return 0;
}
