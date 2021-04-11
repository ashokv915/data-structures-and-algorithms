#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubblesort(int arr[], int n)
{
    int i,j;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
}

int main()
{
    int n,arr[10];
    int i=0;

    cout<<"Enter the number of elements to sort"<<endl;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bubblesort(arr, n);

    display(arr,n);

    return 0;
}
