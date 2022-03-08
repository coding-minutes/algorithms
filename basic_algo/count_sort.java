package basic_algo;

import java.util.*;

public class count_sort {
    static int[] count_sort_(int nums[]) {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int val : nums)
            max = Math.max(max, val);
        for (int val : nums)
            min = Math.min(min, val);

        int range = max - min + 1;
        int freq_cnt[] = new int[range];
        int res[] = new int[nums.length];
        for (int val : nums)
            freq_cnt[val - min]++;
        for (int i = 1; i < nums.length; i++)
            freq_cnt[i] += freq_cnt[i - 1];
        for (int i = nums.length - 1; i >= 0; i--) {
            int val = nums[i];
            int pos = freq_cnt[val - min];
            res[pos - 1] = val;
            freq_cnt[val - min]--;
        }
        return res;
    }

    public static void main(String args[]) {
        int arr[] = { 1, 1, 3, 1, 2, 5, 6, 1, 4, 1, 2, 6, 4, 3 };
        int res[] = count_sort_(arr);
        System.out.println(Arrays.toString(res));
    }
}
