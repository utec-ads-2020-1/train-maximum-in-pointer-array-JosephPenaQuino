#include "max.h"

int max(int *iptr[], int n)
{
	int max_number = *iptr[0];
	int val;
	for (int i = 0;i < n; ++i)
	{
		val = *iptr[i];
		if(max_number <= val)
			max_number = val;
	}
	return max_number;
}