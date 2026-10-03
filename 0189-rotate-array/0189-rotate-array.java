class Solution {
    public void rotate(int[] nums, int k) {
       int n=nums.length;
       k=k%nums.length;
       reverse(nums,0,n-1);
       //then we have to reverse the first half
       reverse(nums,0,k-1);
       reverse(nums,k,n-1);
    }
    public static void reverse(int[] arr,int left,int right){
        while(left<right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
}