vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
	for(int i = 0;i<arr1.size();i++)
    {
        for (int j =0;j<arr2.size();j++)
        {
            if(arr1.at(i) == arr2.at(j))
            {
                ans.push_back(arr1.at(i));
                arr2.at(j) = -1111;
                i++;
                j++;
                
            }
            else if(arr1.at(i)>arr2.at(j))
            {
                j++;
            }
            else if(arr1.at(i)<arr2.at(j))
            {
                i++;
            }

            }
    }        
return ans;
}
