int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	unsigned int res;
	unsigned int i;

	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
#include <stdio.h>

// Function prototype
int max(int *tab, unsigned int len);

int main() {
    int arr[] = { 12, 56, 34, 87, 91, 42 };
    unsigned int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int maximum = max(arr, size); // Call the max function to find the maximum value

    if (size == 0) {
        printf("The array is empty.\n");
    } else {
        printf("The maximum value in the array is: %d\n", maximum);
    }

    return 0;
}
