import java.util.*;

class SinhVien{
    public String msv, name, lop;
    public double a, b, c;

    SinhVien ( String msv, String name, String lop, double a, double b, double c){
        this.msv = msv;
        this.name = name;
        this.lop = lop;
        this.a = a;
        this.b = b;
        this.c = c;
    }
    @Override
    public String toString(){
        return  msv + " " + name + " " + lop + " " + String.format("%.1f", a) + " " + String.format("%.1f", b) + " " + String.format("%.1f", c);
    }
}
public class J05030_Bang_diem_thanh_phan_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<SinhVien> list = new ArrayList<>();
        for (int i = 1; i <= n; i ++) {
            sc.nextLine();
            String msv = sc.nextLine();
            String name = sc.nextLine();
            String lop = sc.nextLine();
            double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
            list.add(new SinhVien(msv, name, lop, a, b, c));
        }

        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return o1.msv.compareTo(o2.msv);
            }
        });
        int cnt = 1;
        for (SinhVien x : list) {
            System.out.print(cnt + " ");
            System.out.println(x);
            cnt ++;
        }
    }
}
