class Solution {
public:

    bool itsok(int m, int n, int mid, int k){
        int count = 0;
        for(int i=1; i<=m; i++){
            int add = min(mid / i, n);
            if (add == 0)
                break;
            count += add;
        }
        return (count>=k);
    }

    int findKthNumber(int m, int n, int k) {
        int left = 1, right = n*m;
        while(left<right){
            int mid = left + (right-left)/2;
            if(itsok(m,n,mid,k)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};
