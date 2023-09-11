import java.util.*;
public class aa{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(cal(n));
        sc.close();
    }
    public static int cal(int n){
        if(n==1)return 1;
        return n*cal(n-1);
    }
}