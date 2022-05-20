#include <malloc.h>
#include <stdlib.h>

#define me99 printf_s("memerr\n\tfile: %s\n\tline: %d\n\n", __FILE__, __LINE__); system("pause>nul"); exit(99);
#define forn(i, j, n) for(int i = j; i < n; ++i)

typedef int data_t;

struct stk {
	data_t data;
	struct stk* next;
};

void push(data_t a);
data_t pop(void);
void prntfStk(void);
