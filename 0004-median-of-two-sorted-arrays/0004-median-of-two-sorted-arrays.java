import java.util.ArrayList;

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {

        int n = nums1.length;
        int m = nums2.length;

        ArrayList<Integer> list = new ArrayList<>();

        int i = 0;
        int j = 0;

        
        while (i < n && j < m) {

            if (nums1[i] <= nums2[j]) {
                list.add(nums1[i]);
                i++;
            } else {
                list.add(nums2[j]);
                j++;
            }
        }

        
        while (i < n) {
            list.add(nums1[i]);
            i++;
        }

        while (j < m) {
            list.add(nums2[j]);
            j++;
        }

        int total = n + m;

    
        if (total % 2 != 0) {
            return list.get(total / 2);
        } else {
            return (list.get(total / 2 - 1) + list.get(total / 2)) / 2.0;
        }
    }
}