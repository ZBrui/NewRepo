#include"Header.h"
#include<stdlib.h>
#include<string.h>
#include<assert.h>
static const int ALLOC_STEP = 2;

void strack_int(stackptr* ptr, const char data)
{
    assert(ptr != 0);
   //���ǿն��� 
  if (*ptr == 0)
 {
   *ptr = calloc(1, sizeof(stackptr));
   //memset(*ptr, 0, sizeof(stackptr));
  // (*ptr)->size = 0;
 }
   //���Ƕ����ڲ����ݿռ䲻��ʱ���� 
  if ((*ptr)->size + 1 > (*ptr)->capacity)
  {
     //�����ݳ�Ա����ռ� 
     (*ptr)->data = realloc((*ptr)->data, (*ptr)->capacity + ALLOC_STEP);
     (*ptr)->capacity = (*ptr)->capacity + ALLOC_STEP;
  }
   //�������ڲ����ݰ�������ֵ(β��) 
  (*ptr)->data[(*ptr)->size] = data;
  (*ptr)->size += 1;
}
char strack_out(stackptr *ptr)
{
	assert(ptr != 0 && (*ptr) != 0 && (*ptr)->size != 0);

	char Data = (*ptr)->data[(*ptr)->size];

	(*ptr)->data[(*ptr)->size] = '\0';
	/*char* pdata = (char*)malloc((*ptr)->size);

	memcpy(pdata, (*ptr)->data, (*ptr)->size - 1);
	(*ptr)->data = pdata;*/

	free((*ptr)->data);
	return Data;
}
bool strack_empty(stackptr ptr)
{
	assert(ptr!=0);
	return (ptr)->size = 0;
}

void strack_print(stackptr pdata )
{
	assert(pdata);

	for (int i = 0; i < pdata->size; i++)
	{
		printf("%c\n", pdata->data[i]);
	}
}