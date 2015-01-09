typedef struct{
  int a;
  int b;
  int c;
}A;

void A_curcular_buffer_init();
int A_curcular_buffer_push(const A* element);
int A_curcular_buffer_pop(A* element);
