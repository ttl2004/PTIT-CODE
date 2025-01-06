import java.util.*;
class IntSet{
    public int [] arr;
    public int len;
    
    IntSet(int [] a) {
        this.arr = a;
        this.len = a.length;
    }

    public IntSet union(IntSet b) {
        int [] tmp = new int [1000];
        int cnt = 0;
        Set<Integer> set = new HashSet<>();
        for(int i = 0; i<this.len; i++) set.add(this.arr[i]);
        for(int i = 0; i<b.len; i++) set.add(b.arr[i]);
        for(int x : set) tmp[cnt++] = x;
        Arrays.sort(tmp, 0, cnt);
        return new IntSet(Arrays.copyOf(tmp, cnt));
    }

    @Override
    public String toString() {
        StringBuilder res = new StringBuilder();
        for(int i = 0; i < this.len; i++) res.append(this.arr[i] + " ");
        return res.toString();
    }
}
public class J04021_Lop_Insert {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
    }
}
