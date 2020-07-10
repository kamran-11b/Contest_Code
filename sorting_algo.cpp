///A Comparative study on Sorting Algorithm///
#include<bits/stdc++.h>
using namespace std;

#define ll long long


///Bubble Sort
void bubble_sort(ll a[], ll n)
{
    ll i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1])
            {
                ll temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
} ///End of Merge Sort.



///Merge Sort
void merge(ll arr[], ll l, ll m, ll r)
{
    ll i, j, k;
    ll n1 = m - l + 1;
    ll n2 =  r - m;
    ll L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(ll arr[], ll l, ll r)
{
    if (l < r)
    {
        ll m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}///End Of Merge Sort.




///Quick Sort.
ll partition (ll arr[], ll low, ll high)
{
    ll pivot = arr[high];
    ll i = (low - 1);

    for (ll j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            ll temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
    }
    ll temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i + 1);
}

void quickSort(ll arr[], ll low, ll high)
{
    if (low < high)
    {

        ll pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
} ///End Quick Sort.





///Heap Sort.
void heapify(ll arr[], ll n,ll i)
{
    ll largest = i;
    ll l = 2*i + 1;
    ll r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        ll temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr, n, largest);
    }
}
void heapSort(ll arr[], ll n)
{
    for (ll i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}///End Of Heap Sort.



///Insertion Sort
void insertionSort(ll arr[], ll n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}///End Of Insertion Sort



///Selection Sort
void selectionSort(ll arr[], ll n)
{
    ll i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        ll temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
} ///End of Selection Sort




void printArray(ll a[],ll n)
{
    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    freopen("A.txt","r",stdin);
    freopen("B.txt","w",stdout);

    clock_t t;
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    t = clock();
   // bubble_sort(a,n);
    //mergeSort(a,0, n-1);
    //quickSort(a,0,n-1);
   // heapSort(a,n);
   // insertionSort(a,n);
  //  printArray(a,n);
    //selectionSort(a,n);
   t = clock() - t;
   printf ("It took me  %f seconds.\n",((float)t)/CLOCKS_PER_SEC);


    return 0;

}
