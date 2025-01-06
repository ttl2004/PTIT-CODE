import java.util.*;
class SoPhuc {
    private long thuc;
    private long ao;
    public SoPhuc(long thuc, long ao) {
        this.thuc = thuc;
        this.ao = ao;
    }
    public SoPhuc add(SoPhuc a) {
        long thuc = this.thuc + a.thuc;
        long ao = this.ao + a.ao;
        return new SoPhuc(thuc, ao);
    }
    public SoPhuc mul(SoPhuc a) {
        long thuc = this.thuc * a.thuc - this.ao * a.ao;
        long ao = this.thuc * a.ao + this.ao * a.thuc;
        return new SoPhuc(thuc, ao);
    }

    public SoPhuc Pow() {
        return this.mul(this);
    }
    public String toString() {
        if (ao >= 0) return thuc + " + " + ao + "i";
        else return thuc + " - " + (-ao) + "i";
    }
}
public class J04018_So_phuc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            SoPhuc A = new SoPhuc(sc.nextLong(), sc.nextLong());
            SoPhuc B = new SoPhuc(sc.nextLong(), sc.nextLong());
            SoPhuc C = A.add(B).mul(A);
            SoPhuc D = A.add(B);
            D = D.Pow();
            System.out.println(C.toString() + ", " + D.toString());

        }
    }
}
