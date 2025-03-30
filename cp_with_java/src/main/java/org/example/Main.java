package org.example;

import java.util.*;

public class Main {
    public static void main(String[] args) {

        // create an array of 5 integer
        int[] numArray=new int[5];
        numArray[0]=343;
        numArray[3]=89;
//        for (int i = 0; i < 5; i++) {
//            System.out.print(numArray[i]);
//            System.out.print(' ');
//        }
        /**
         * Access: O(1)
         * Search: O(n)
         * Insertion: O(n)
         * Deletion: O(n)
         */

        ArrayList<Integer> arrayList=new ArrayList<Integer>();

        for (int i = 0; i < 10; i++) {
            Random random=new Random();
            arrayList.add(random.nextInt(600));
        }
        //Similar to an array, but can change size
        //Good for storing and accessing items quickly
        //Not good for adding or removing items in the middle
//        for (int x:arrayList){
//            System.out.print(x);
//            System.out.print(' ');
//        }
//        System.out.println();

        Stack<Integer> stack=new Stack<Integer>();
        Queue<Integer> queue=new LinkedList<Integer>();
        for(int i=0;i<5;i++){
            int x=new Random().nextInt(50);
            stack.push(x);
            queue.add(x);
        }
        while (!stack.isEmpty()){
            System.out.println(stack.peek());
            stack.pop();
        }
        while (!queue.isEmpty()){
            System.out.println(queue.peek());
            queue.remove();
        }
        /**
         * Push: O(1)
         * Pop: O(1)
         * Peek: O(1)
         * Search: O(n)
         */


    }

    public int minimumIndex(List<Integer> nums) {

        Map<Integer,Integer> mp=new HashMap<>();
        int n=nums.size();
        for (Integer num : nums) {
            mp.put(num, mp.getOrDefault(num, 0) + 1);
        }
        Map<Integer,Integer> p=new HashMap<>();
        for(int i=0;i<n;i++){
            p.put(nums.get(i), p.getOrDefault(nums.get(i), 0) + 1);
           mp.put(nums.get(i),mp.get(nums.get(i))-1);
            if(p.get(nums.get(i))*2>i+1&&mp.get(nums.get(i))*2>n-1-i) return i;
        }
        return -1;
    }
    public int numberOfAlternatingGroups(int[] colors, int k) {
        int n=colors.length;
        int[] v=new int[n+k-1];
        for (int i = 0; i <n+k-1 ; i++) {
            v[i]=colors[i%n];
        }
        int left=0,ans=0;
        for (int i = 1; i < n+k; i++) {
            if(v[i]==v[i-1]){
                left=i;
                continue;
            }
            if(i-left<k)continue;
            ans++;
            left++;
        }
        return ans;


    }


}