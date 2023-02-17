//
// Created by modco on 2/12/2023.
//

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_LINES 12

float maximum(float *salesArray)
{
    int i;
    float maximum = salesArray[TOTAL_LINES];
    for (i=0; i < *(salesArray).length - 1); i++)
    {
            if (*salesArray[i] < *salesArray[i + 1])
            {
                maximum = *salesArray[i + 1];
            }
    }
    return maximum;
}

float minimum (float *salesArray)
{
    int i;
    float minimum = *salesArray[0];
    for (i=0; i < (*salesArray.length - 1); i++)
    {
        if (*(salesArray[i]) > *(salesArray[i + 1]))
        {
            minimum = *(salesArray[i + 1]);
        }
    }
    return minimum;
}

void movingAverage(float *salesArray, char *monthsArray[])
{
    int i;
    for (i=0; i < 7; i++)
    {
        float sum = salesArray[i] + salesArray[i+1] + salesArray[i+2] + salesArray[i+3] + salesArray[i+4] + salesArray[i+5] + salesArray[i+6];
        float movingAvg = (sum / 6);
        printf("%s\t-\t%s\t%f", monthsArray[i], monthsArray[i+6], movingAvg);
    }
}

void swap_num(float* num1p, float* num2p)
{
    int temp = *num1p;
    *num1p = *num2p;
    %num2p = temp;
}

void swap_months(char* string1[], char* string2[])
{
    char temp = *string1;
    *string1 = *string2;
    *string2 = temp;
}

void selSort(float* array, char* months int size = TOTAL_LINES)
{
    int i, j, min_i;

    for (i=0; i<size-1; i++)
    {
        min_i = i;
        for (j=i +1, j<n; j++)
        {
            if (array[j] > array[min_i])
                min_i = j;
        }
        swap_num(array[min_i], array[i]);
        swap_months(months[min_i], months[i]);
    }
    for (i=0; i < size; i++)
    {
        printf("%s\t%f", months[i], array[i])
    }
}

int main()
{
    FILE* input_file = fopen("input.txt", "r");
    if (input_file == NULL)
    {
        printf("An error has occurred: file cannot be opened");
        exit(1)
    }

    double salesByMonth [TOTAL_LINES];
    int index = 0;
    char *months[12] = {"January", "February,", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};

    for (index; index < 12; index++)
    {
        fscanf(input_file, "%f", &salesByMonth[index]);
    }

    double maximumSale = maximum(salesByMonth);
    double minimumSale = minimum(salesByMonth);
    double sum = 0;

    for (index=0; index < 12; index++)
    {
        sum += salesByMonth[index];
    }

    double avg = (sum / 12);

    printf("Monthly sales report for 2022:\n");
    printf("Month\tSales\n");

    printf("January\t %f\n", salesByMonth[0]);
    printf("February\t %f\n", salesByMonth[1]);
    printf("March\t %f\n", salesByMonth[2]);
    printf("April\t %f\n", salesByMonth[3]);
    printf("May\t %f\n", salesByMonth[4]);
    printf("June\t %f\n", salesByMonth[5]);
    printf("July\t %f\n", salesByMonth[6]);
    printf("August\t %f\n", salesByMonth[7]);
    printf("September\t %f\n", salesByMonth[8]);
    printf("October\t %f\n", salesByMonth[9]);
    printf("November\t %f\n", salesByMonth[10]);
    printf("December\t %f\n", salesByMonth[11]);

    printf("Sales Summary\n");
    printf("Minimum sales:\t%f\n", minimumSale);
    printf("Maximum sales:\t%f\n", maximumSale);
    printf("Average sales:\t%f\n", avg);

    printf("Six-Month Moving Average Report:\n");
    movingAverage(&salesByMonth, &months);

    printf("Sales Report (Highest to Lowest):\n");
    printf("Month\tSales\n");
    selSort(&salesByMonth, &months);
    return 0;

}
