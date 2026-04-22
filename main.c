#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    void *data;      // 指向原始内存块
    size_t item_size; // 每个元素占多少字节
    int capacity;    // 数组总容量
    int size;        // 当前存了多少个
} MyVector;

void vector_init(MyVector *v, size_t item_size);

void vector_push(MyVector *v, void *item); (注意这里要处理 realloc)

void* vector_get(MyVector *v, size_t index);

int main() {
  return 0;
}
