class Solution {
public:
    int maxDistance(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int start=1;
        int end=arr[arr.size()-1];
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1;
            int pos=arr[0];
            for(int i=1;i<arr.size();i++){
                if(pos+mid<=arr[i]){
                    count++;
                    pos=arr[i];
                }
            }
            if(count>=k){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};