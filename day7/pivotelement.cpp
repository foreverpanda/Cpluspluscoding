#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
int i=0;
    while(start<end)
    
    {
        cout<<" Step : "<<i<<" Start : "<<start<<" End : "<<end<<" Mid : "<<mid<<endl;;

        if(arr[mid]>=arr[0])
        start = mid+1;
    
        else
        end = mid;
        mid = start + (end-start)/2;
        i++;
    }
    return start;
    

}
int main()
{
    int arr[7] = {5,6,7,9,1,2,4};
    int size = 7;
    int h = pivot(arr,7);
    cout<<"Index : "<<h;

    cout<<" Pivot element : "<<arr[h];
        return 0;
}
