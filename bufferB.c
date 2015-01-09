#include "bufferB.h"

typedef B circular_element_t;
#include "circular.generic.c"  

static circular_element_t buffer_space[50];

static circular_buffer_t circular_buffer = {
  .buffer = buffer_space,
  .length = sizeof(buffer_space)/sizeof(buffer_space[0]),
};

void B_curcular_buffer_init(){
  generic_curcular_buffer_init(&circular_buffer);
}

int B_curcular_buffer_push(const B* element)
{
  return generic_curcular_buffer_push(&circular_buffer,element);
}
int B_curcular_buffer_pop( B* element)
{
  return generic_curcular_buffer_pop(&circular_buffer,element);
}
