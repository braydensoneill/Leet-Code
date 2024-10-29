class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m_remaining = m - 1;
        int n_remaining = n - 1;

        for (int i = m + n - 1; i >= 0; i--) {
            if (m_remaining < 0 || n_remaining < 0)
                break;

            if (nums1[m_remaining] >= nums2[n_remaining])
               nums1[i] = nums1[m_remaining--];
            
            else 
                nums1[i] = nums2[n_remaining--];
        }

        for (int i=0; i<=n_remaining; i++) 
            nums1[i] = nums2[i];
    }
};