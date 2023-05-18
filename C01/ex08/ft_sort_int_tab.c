#include <stdio.h>

#include <stdlib.h>
#include <time.h>
int	*ft_create_random_int_tab(int size, int min, int max)
{
	int	i;
	int	*result;
	
	i = 0;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (0);
	srand(time(0));
	while (i < size)
	{
		result[i] = rand() % (max - min + 1) + min;
		i++;
	}
	return (result);
}

void	ft_print_array(int *tab, int size, int step)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		printf("\n");
		i += step;
	}

}

void	ft_swap(int *a, int *b)
{
	int save_int;

	save_int = *a;
	*a = *b;
	*b = save_int;
}

// Insertion Sort
void	ft_insertion_sort_tab(int *tab, int size)
{
	int i;
	int j;
	int	curr;

	i = 1;

	while (i < size)
	{
		curr = tab[i];
		j = i - 1;
		while (j >= 0 && curr < tab[j])
		{
			tab[j+1] = tab[j];
			j--;
		}
		tab[j+1] = curr;
		i++;
	}
}

// Bubble Sort
void	ft_bubble_sort_tab(int *tab, int size)
{
	int i;
	int j;
	int swapped;
	int tmp;
	
	i = 1;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

// Selection Sort
void	ft_selection_sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	minind;
	
	i = 0;
	while (size - 1 > i)
	{	
		j = i + 1;
		minind = i;
		while (size > j)
		{
			if (tab[minind] > tab[j])
				minind = j;
			j++;
		}
		if (minind != i)
		{
			ft_swap(&tab[i], &tab[minind]);
		}
		i++;
	}
}

// Merge Sort
void	ft_merge(int *tab, int left, int mid, int right)
{
	int	i;
	int	j;
	int	k;
	int	temp[right - left + 1];
	
	i = left;
	j = mid + 1;
	k = 0;
	while (i <= mid && j <= right)
	{
		if (tab[i] <= tab[j])
			temp[k++] = tab[i++];
		else
			temp[k++] = tab[j++];
	}
	while (i <= mid)
		temp[k++] = tab[i++];	
	while (j <= right)
		temp[k++] = tab[j++];
	i = left;
	k = 0;
	while (i <= right)
		tab[i++] = temp[k++];
}
void	ft_merge_sort_tab(int *tab, int left, int right)
{
	int	mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		ft_merge_sort_tab(tab, left, mid);
		ft_merge_sort_tab(tab, mid + 1, right);
		ft_merge(tab, left, mid, right);
	}	
}

//Counting Sort
void ft_counting_sort_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	i;
	int	j;
	int	range;
	
	i = 1;
	j = 0;
	min = tab[0];
	max = tab[0];
	while (i < size)
	{
		if(tab[i] > max)
			max = tab[i];
		if(tab[i] < min)
			min = tab[i];
		i++;
	}
	range = max - min + 1;
	int	count[range];
	i = 0;
	while (i < range)
		count[i++] = 0;
	i = 0;
	while (i < size)
	{
		count[tab[i] - min]++;
		i++;
	}
	i = 0;
	while (i < range)
	{
		while (count[i] > 0)
		{
			tab[j++] = i + min;
			count[i]--;
		}
		i++;
	}
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	*my_tab;
	int	sort_type;
	int	size;
	int	min;
	int	max;
	
	if (argc >= 2)
		sort_type = atoi(argv[1]);
	else
		sort_type = 0;
	
	if (argc >= 3)
		size = atoi(argv[2]);
	else
		size = 10;
	
	if (argc == 5)
	{
		min = atoi(argv[3]);
		max = atoi(argv[4]);
	}
	else
	{
		min = -100;
		max = 100;
	}
		
	printf("creating random int array...\n");
	my_tab = ft_create_random_int_tab(size, min, max);
	if (my_tab)
	{
		//printf("printing random int array...\n");
		//ft_print_array(my_tab, size);
		//printf("\n");
		printf("sorting random int array of size %d, range btw. %d and %d...\n", size, min, max);
		if (sort_type == 0 || sort_type == 1)
		{
			printf("Bubble-Sort...\n");
			ft_bubble_sort_tab(my_tab, size);
		}
		if (sort_type == 2)
		{
			printf("Insertion-Sort...\n");
			ft_insertion_sort_tab(my_tab, size);
		}
		if (sort_type == 3)
		{
			printf("Selection-Sort...\n");
			ft_selection_sort_tab(my_tab, size);
		}
		if (sort_type == 4)
		{
			printf("Merge-Sort...\n");
			ft_merge_sort_tab(my_tab, 0, size - 1);
		}
		if (sort_type == 5)
		{
			printf("Counting-Sort...\n");
			ft_counting_sort_tab(my_tab, size);
		}
		//printf("printing sorted int array...\n");
		//ft_print_array(my_tab, size, 100);
		free(my_tab);
	}
	else
	{
		printf("failed to allocate sufficient memory...");
	}
	return (0);
}
