import java.util.*;

class Matrix{
    public int n,m;
    public long[][] a; 

    public Matrix(int n, int m){
        this.n = n;
        this.m = m;
        a = new long[n + 5][m + 5];
    }

    public void nextMatrix(Scanner sc){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = sc.nextLong();
            }
        }
    }

    public Matrix mul(Matrix b){
        Matrix res = new Matrix(n,b.m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < b.m; j++){
                res.a[i][j] = 0;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < b.m; j++){
                for(int k = 0; k < m; k++){
                    res.a[i][j] += a[i][k] * b.a[k][j];
                }
            }
        }
        return res;
    }

    @Override
    public String toString(){
        StringBuilder res = new StringBuilder();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res.append(a[i][j] + " ");
            }
            res.append("\n");
        }
        return res.toString();
    }
}
public class J04016_Tich_hai_doi_tuong_ma_tran {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
        Matrix c = new Matrix(n,p);
    }
}
