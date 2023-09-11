import java.util.*;
public class cc {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []a=new int[n+1];
        for(int i=1;i<=n;++i)a[i]=sc.nextInt();
        for(int i=2;i<=n;++i){
            int key=a[i];
            int j=i-1;
            for(;j>0 && a[j]>key;j--)
                a[j+1]=a[j];
            a[j+1]=key;
        }
        for(int i=1;i<=n;++i){
            System.out.print(a[i]);
            System.out.print(" ");
        }
        sc.close();
    }
}
