class Solution {
    public void rotate(int[] nums, int k) {
        //yaha par queue banege simplivy quene front k element ko back par add kardengeg k times
        Deque<Integer> q=new ArrayDeque<>();
        for(int num : nums){
            q.add(num);
        }
        k = k % nums.length;
        while(k>0){
            int x=q.removeLast();
            q.addFirst(x);
            k--;
        }
        for(int i=0;i<nums.length;i++){
            nums[i]=q.removeFirst();
        }
    }
}