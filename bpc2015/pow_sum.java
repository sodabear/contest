import java.util.*;
import java.lang.*;

public class pow_sum{
    public static long problem4(int a , int k , int p) {
        int[] sum_arr = new int[k];

        sum_arr[0] = 1;
        for(int i =0; i < k; i++){
            if(i != 0){
                sum_arr[i] = sum_arr[i-1]*a;
            }
        }

        System.out.println( Math.pow(a,k) + "||" +sum_arr[k-1]) ;
        long sum = 0;
        for(int i =0; i < k; i++)
            sum += sum_arr[i];
        long pp = p;
        long result = sum % pp;
        return result;
    }


    public static void main(String[]  args){
       int a,b,c;
       a = Integer.parseInt(args[0]);
       b = Integer.parseInt(args[1]);
       c = Integer.parseInt(args[2]);
       System.out.println("My input is " + a+ " ," + b + ", "+ c ) ;
       long k = problem4(a,b,c);
       System.out.println("My result is K =: " + k +  " || " +  "@Real should be 4191" ) ;
    }

}
