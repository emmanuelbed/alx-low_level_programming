/**
 *int_index - a
 *@array: a
 *@size: a
 *@cmp: a
 *
 *Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			num = cmp(array[i]);
			if (num)
				return (i);
		}
	}
	return (-1);
}

