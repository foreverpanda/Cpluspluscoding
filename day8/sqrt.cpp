
int sqrtN(long long int N)
{
  unsigned long long int start = 0;
   unsigned long long int end = N;
      unsigned long long int mid = start + (end-start)/2;
   unsigned long long int ans=-1;
    
    while(start <=end)
    {
       unsigned long long int square = mid*mid;
        
        if(square == N)
        {
            return mid;
        }
        else if(square<N)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
