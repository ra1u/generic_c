#include "bufferA.h"

typedef A circular_element_t;
#include "circular.generic.c"  

static circular_element_t buffer_space[20];

static circular_buffer_t circular_buffer = {
  .buffer = buffer_space,
  .length = sizeof(buffer_space)/sizeof(buffer_space[0]),
};

void A_curcular_buffer_init(){
  generic_curcular_buffer_init(&circular_buffer);
}

int A_curcular_buffer_push(const A* element)
{
  return generic_curcular_buffer_push(&circular_buffer,element);
}
int A_curcular_buffer_pop( A* element)
{
  return generic_curcular_buffer_pop(&circular_buffer,element);
}
