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

int highestnumber(int arr[],int pivot,int size,int key)
{
    int start=0;
    int end = size-1;
    
    if(key == arr[pivot])
    {
        return pivot;
    }
    else if(key > arr[pivot])
    {
        start = 0;
        end = pivot-1;
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(arr[mid]==key)
            {
                return 1;
            }
            else if(arr[mid]>key)
            {
                end = mid-1;
            }
            else
            start = mid+1;
            mid = start + (end-start)/2;
        }

    }
    else
    {
        start = pivot;
        end = size-1;
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(arr[mid]==key)
            {
                return 1;
            }
            else if(arr[mid]>key)
            {
                end = mid-1;
            }
            else
            start = mid+1;
            mid = start + (end-start)/2;
        }

    }
    return 0;
}

int main()
{
    int arr[7] = {5,6,7,9,1,2,4};
    int size = 7;
        int h = pivot(arr,7);
    cout<<"Index : "<<h<<endl;
    cout<<"Element : "<<arr[h]<<endl;
    cout<<"Enter number to search : ";
    int z;
    cin>>z;
    

   int k =  highestnumber(arr,h,size,z);
   
   if(k == 1)
   cout<<"Found ";
   else
   cout<<"Not found";
}
