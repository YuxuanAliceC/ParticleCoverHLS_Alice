
#include "system.h"
#include "constants.h"

#include <iostream>
#include <stdlib.h>

CLAIM_CONST_ARRAYS

void system_top(cover_s *cover,
                point_s row_data[NUM_LAYERS][MAX_POINTS_PER_LAYER],
                int num_points[NUM_LAYERS]) {
  const_array_initializer(radii, trapezoid_edges, parallelogram_slopes,
                          radii_leverArm);
  // PRINT_CONST_ARRAYS;

  patch_buffer_init(&cover->patch_buffer);

  cover_make_patch_shadow_quilt_from_edges(cover, row_data, num_points);

  // std::cout << "cover->n_patches = " << cover->n_patches << std::endl;

  return;
}

// dummy main function
#if CONFIG_IS_SYNTHESIS == flase
int main(void) {
  std::cerr << "This is a dummy main function" << std::endl;
  return 0;
}
#endif
