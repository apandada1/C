#include<stdio.h>
// Prints binary strings of length n and having exactly k no. of 1's
// Based on https://stackoverflow.com/a/19655817/3128341
int NumberOfBitsSet(int number)
{
    int BitsSet = 0;

    while(number != 0)
    {

        if(number & 0x01)
        {
            BitsSet++;
        }
        number = number >> 1;
    }
    return BitsSet;
}

void PrintNumberInBinary(int number, int NumBits)
{
    int val;
    val = 1 << NumBits; // here val is the maximum possible number of N bits with only MSB set

    while(val != 0)
    {
        if(number & val)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

        val = val >> 1;
    }
}

int main()
{
    int n,k,i;
    int max,min;
    printf("enter total number of bits and number of bits to be set:\n");
    scanf("%d %d", &n, &k);

    min = ((1 << k) - 1); //min possible values with k bits set
    max = (min << (n-k)); //max possible value with k bits set!
    printf("min=%d max=%d\n", min, max);
    for(i=min; i<= max; i++)
    {
            if(NumberOfBitsSet(i) == k)
            {
                PrintNumberInBinary(i, (n-1));
                printf("\n");
            }
    }

    return 0;
}