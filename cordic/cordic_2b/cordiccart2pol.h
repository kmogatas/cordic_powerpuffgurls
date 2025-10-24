#ifndef CORDICCART2POL_H
#define CORDICCART2POL_H
#include <ap_fixed.h>

#define NO_ITER 20

typedef float data_t;

typedef ap_fixed<32,3> input_t;
typedef ap_fixed<32,2> radius_t;
typedef ap_fixed<32,3> theta_t;


void cordiccart2pol(input_t x, input_t y, radius_t * r,  theta_t * theta);

#endif
