import java.util.*;
public class Coffee_Problem {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int q=sc.nextInt();
        int n_a[][] =new int[n][2];
        int q_a[][]=new int[q][2];
        for(int i=0;i<n;i++){
            n_a[i][0]=sc.nextInt();
            n_a[i][1]=sc.nextInt();
        }
for(int i=0;i<q;i++){
            q_a[i][0]=sc.nextInt();
            q_a[i][1]=sc.nextInt();
        }
        int[] d=new int[2000001];
    for(int[] j:n_a){
        d[j[0]]=1;
        d[j[1]+1]=-1;
    }
    int t=d[0];
    for(int j=0;j<d.length;j++){
        t+=d[j];
        d[j]=t;
    }
    for(int[] i:q_a){
        int l=0;
        for(int j=i[0];j<=i[1];j++){
            if(d[j]>=k){
                l++;
            }
        }
        System.out.println(l);
    }}
}