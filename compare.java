import java.util.Arrays;

public class compare {

    public static void main(String[] args) {
        int[] arr = new int[1000];
        int[] tmp = new int[1000];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = 1000-i;
            tmp[i]=arr[i];
        }
        long startTime = System.currentTimeMillis();
        Bubble_sort(arr);
        long endTime = System.currentTimeMillis();
        System.out.println("Bubble sort took " + (endTime - startTime) + " milliseconds");
        for(int i=0;i<arr.length;++i)arr[i]=tmp[i];
        startTime = System.currentTimeMillis();
        Insert_sort(arr);
        endTime = System.currentTimeMillis();
        System.out.println("Insert sort took " + (endTime - startTime) + " milliseconds");
        for(int i=0;i<arr.length;++i)arr[i]=tmp[i];
        startTime = System.currentTimeMillis();
        Merge_sort(arr,0,arr.length-1);
        endTime = System.currentTimeMillis();
        System.out.println("Merge sort took " + (endTime - startTime) + " milliseconds");
        for(int i=0;i<arr.length;++i)arr[i]=tmp[i];
        startTime = System.currentTimeMillis();
        Quick_sort(arr,0,arr.length-1);
        endTime = System.currentTimeMillis();
        System.out.println("Quick sort took " + (endTime - startTime) + " milliseconds");
    }
    public static void Bubble_sort(int []a){
        for(int i=0;i<a.length-1;++i)
            for(int j=a.length-1;j>=i+1;j--)
                if(a[j]<a[j-1]){
                    int tmp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=tmp;
                }
    }

    public static void Insert_sort(int []a){
        for(int i=1;i<a.length;++i){
            int key=a[i];
            int j;
            for(j=i-1;j>=0 && a[j]>key;--j)
                a[j+1]=a[j];
            a[j+1]=key;
        }
    }
    public static void Merge_sort(int []a,int p,int r){
        if(p>=r)return;
        int q=(p+r)/2;
        Merge_sort(a,p,q);
        Merge_sort(a,q+1,r);
        Merge(a,p,q,r);
    }
    public static void Merge(int []a,int p,int q,int r){
        int n_l=q-p+1;
        int n_r=r-q;
        int []L= new int[n_l];
        int []R=new int[n_r];
        int i,j,k=p;
        for(i=0;i<n_l;++i)
            L[i]=a[p+i];
        for(j=0;j<n_r;++j)
            R[j]=a[q+j+1];
        i=j=0;
        while(i<n_l && j<n_r){
            if(L[i]<=R[j]){
                a[k]=L[i];
                i++;
            }
            else{
                a[k]=R[j];
                j++;
            }
            k++;
        }
        while(i<n_l){
            a[k]=L[i];
            i++;
            k++;
        }
        while(j<n_r){
            a[k]=R[j];
            j++;
            k++;
        }
    }
    public static void Quick_sort(int []a,int p,int r){
        if(p<r){
            int q=Partition(a,p,r);
            Quick_sort(a,p,q-1);
            Quick_sort(a,q+1,r);
        }
    }
    public static int Partition(int []a,int p,int r){
        int  x=a[r];
        int i=p-1;
        int num=(int)(p+Math.random()*(r-p+1));
        int t=a[num];
        a[num]=a[r];
        a[r]=t;
        for(int j=p;j<=r-1;++j)
            if(a[j]<=x){
                i++;
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        int tmp=a[r];
        a[r]=a[i+1];
        a[i+1]=tmp;
        return i+1;
    }
}
