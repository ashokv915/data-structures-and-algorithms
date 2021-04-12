#include<iostream>

using namespace std;

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void insertion(int a[], int n)
{
    int i,j,tmp;

    for(i=1; i<n; i++)
    {
        tmp = a[i];
        j = i-1;

        while((tmp<a[j]) && j>=0)
        {
            a[j+1] = a[j];
            j=j-1;
            //display(a,n);
        }
        a[j+1] = tmp;
        //display(a,n);
        cout<<endl;
    }
}

int main()
{
    int arr[10], n;

    cout<<"Number of elements"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    insertion(arr,n);
    display(arr,n);

    return 1;
}
