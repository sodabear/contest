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
