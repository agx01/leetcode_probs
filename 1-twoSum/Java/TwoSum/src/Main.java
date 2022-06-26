import java.util.Hashtable;

public class Main {
    static class Solution {
        public int[] twoSum(int[] nums, int target) {
            Hashtable<Integer, Integer> h = new Hashtable<Integer, Integer>();
            int [] resultArr = new int[2];

            for(int i=0; i<nums.length; i++){
                int diff = target - nums[i];
                if(h.containsKey(diff) == false){
                    h.put(nums[i], i);
                }
                else{
                    resultArr[0] = h.get(target - nums[i]);
                    resultArr[1] = i;
                    break;
                }
            }
            return resultArr;
        }
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        int arr[] = {2,7, 5,11, 15};


        System.out.println(java.util.Arrays.toString(sol.twoSum(arr, 9)));
    }
}