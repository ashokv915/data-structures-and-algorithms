#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], low, high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for(int j=low; j<=high-1;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

int main()
{
    int a=10,b=5;

    cout << "Before Swap A: " <<a<<" B: "<<b<<endl;
    swap(&a,&b);
    cout << "After swap A: "<<a<<" B: "<<b<<endl;

    return 0;
}
