/**
 * Author: Mingxing LAI (me@mingxinglai.com)
 * Date: 2016年 8月29日 星期一 09时59分25秒 CST
 */
#ifndef STACK_INCLUDED
#define STACK_INCLUDED

#define T Stack_T
typedef struct T *T;

extern T Stack_new(void);
extern int Stack_empty(T stk);
extern void Stack_push(T stk, void *x);
extern void *Stack_pop(T stk);
extern void Stack_free(T *stk);

#undef T
#endif
