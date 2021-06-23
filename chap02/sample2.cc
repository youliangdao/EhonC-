void Swap(int* a, int* b){
  if(*a == *b){
    return ;
  }

  int buf = *a;
  *a = *b;
  *b = buf;
}