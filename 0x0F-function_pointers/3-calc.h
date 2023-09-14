#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int d, int e);
} op_t;

int op_add(int d, int e);
int op_sub(int d, int e);
int op_mul(int d, int e);
int op_div(int d, int e);
int op_mod(int d, int e);
int (*get_op_func(char *s))(int, int);

#endif
