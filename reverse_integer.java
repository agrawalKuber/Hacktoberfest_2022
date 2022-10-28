/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

import java.io.*;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int x = sc.nextInt();
		System.out.println(reverse(x));
	}
	
	public static int reverse(int x) {
        int val = x,num = Math.abs(x),sum=0,r=0;
        while(num>0){
            r=num%10;
            if (sum > Integer.MAX_VALUE/10 || (sum == Integer.MAX_VALUE / 10 && r > Integer.MAX_VALUE%10))
                return 0;
            if (val<0 && (sum == Integer.MAX_VALUE / 10 && r > (Integer.MAX_VALUE%10)+1))
                return 0;
            sum = sum * 10 + r;
            num/=10;
        }
        if(val<0)
            return sum-2*sum;
        else return sum;
    }
}
