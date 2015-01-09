// generic ring buffer
//
// extrnaly defined type is 
// circular_element_t;

typedef struct{
  circular_element_t * buffer;
  int length;  
  int push;
  int pop;  
} circular_buffer_t;

static void generic_curcular_buffer_init(circular_buffer_t * cb){
  cb->push = 0;
  cb->pop = 0;
}
//return 0 or sucess or -1 on error
static 
int generic_curcular_buffer_push(circular_buffer_t * cb, 
                                 const circular_element_t* element)
{
  int push = cb->push+1;
  if(push == cb->length) {
    push  = 0;
  }
  if(push == cb->pop){
    return -1; //full
  }
  cb->buffer[cb->push] = *element;
  cb->push = push;
  return 0;
}
//return 0 or sucess or -1 if empty
static
int generic_curcular_buffer_pop(circular_buffer_t * cb, 
                                circular_element_t* element)
{
  if( cb->pop ==  cb->push) {
    return -1; //empty
  }
  int pop = cb->pop+1;
  if(pop == cb->length){
    pop=0;
  }
  *element = cb->buffer[cb->pop];
  cb->pop = pop;
  return 0;
}
