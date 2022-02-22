#include <stdio.h>

#define ARRAY_SIZE 6

void searchValue(int *array, const int array_size, const int find_value, int **store)
{
    for (int index = 0; index < array_size; index++)
    {
        printf("Address [%d]: %ld\n", index, &array[index]);

        if (find_value == array[index])
        {
            *store = &array[index];
            break;
        }
        else
        {
            *store = NULL;
        }
    }
}

int main()
{
    int array[ARRAY_SIZE] = {31, 41, 59, 26, 41, 58};

    int *value = NULL;

    searchValue(array, ARRAY_SIZE, 26, &value);

    printf("\nValue: %d\n", *value);
    printf("Value address: %ld\n", value);

    return 0;
}
