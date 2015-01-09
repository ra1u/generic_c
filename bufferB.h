typedef struct {
  float b;
}B;

void B_curcular_buffer_init();
int B_curcular_buffer_push(const B* element);
int B_curcular_buffer_pop( B* element);
