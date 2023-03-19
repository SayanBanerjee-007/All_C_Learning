#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lim;
    printf("Enter how many nuber you want to write: ");
    scanf("%d", &lim);
    float *ptr = malloc(lim * sizeof(float));
    if (ptr == 0)
    {
        printf("Error!! You haven't that much memory free.");
        exit(1);
    }
    for (int i = 0; i < lim; i++)
    {
        printf("Enter No.%d element: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < lim - 1; i++)
    {
        for (int j = i + 1; j < lim; j++)
        {
            if (ptr[i] > ptr[j])
            {
                 ptr[i] = ptr[i] + ptr[j] - (ptr[j] = ptr[i]);
            }
        }
    }
    printf("The values in assending order\n---> ");
    for (int i = 0; i < lim; i++)
    {
        printf("%.2f\t", ptr[i]);
    }
    free(ptr);
    printf("\n\n\n");
    return 0;
}