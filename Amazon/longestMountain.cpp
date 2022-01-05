class Solution {
public:
    int longestMountain(vector<int>& A) {
        int res=0;
        
        int n = A.size();
        
        for (int i=1;i<n;i++){
            int count=1;
            bool flag =false;
            
            //increasing seq
            int j=i;
            
            while (j<n && j<n && A[j]>A[j-1]){
                j++;
                count++;
            }
            
            //decreasing seq
            while(i!=j && j<n && A[j]<A[j-1]){
                j++;
                count++;
                flag=true;
            }
            
            //max of length
            if (i!=j && flag && count>2){
                res = max(res, count);
                j--;
            }
            
            i=j;
        }
        return res;
    }
};