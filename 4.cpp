class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v;
        v.assign((m+n),0);
        if(m==0){
            return nums2;
        }
        if(n==0){
            return nums1;
        }
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
            if (nums1[i] < nums2[j]){
                v[k] = nums1[i];
                i++;
            }
            else{
                v[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            v[k] = nums1[i];
            k++; i++;
        }
        while(j<n){
            v[k] = nums2[j];
            k++; j++;
        }
        return v;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a = merge(nums1,nums1.size(),nums2,nums2.size());
        int b = a.size();
        if(b==1){
            return a[0];
        }
        if(b%2!=0){
            return (double)(a[b/2]);
        }
        else{
            int d = b/2;
            cout << d;
            double c = ((a[d] + a[d-1])/2.0);
            return c;
        }
    }
};
