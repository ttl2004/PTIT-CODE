import java.util.*;
import java.lang.Math.*;

class ThiSinh{
    public int id;
    public String name;
    public String Date;
    public Double Diem1, Diem2, Diem3, DiemTong;

    public ThiSinh(int id, String name, String Date, Double Diem1, Double Diem2, Double Diem3) {
        this.id = id;
        this.name = name;
        this.Date = Date;
        this.Diem1 = Diem1;
        this.Diem2 = Diem2;
        this.Diem3 = Diem3;
        this.DiemTong = Diem1 + Diem2 + Diem3;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + Date + " " + DiemTong;
    }
}
public class J05009_Tim_thu_khoa_cua_ky_thi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double _max = 0;
        ThiSinh[] ds = new ThiSinh[n];
        for (int i = 0; i < n; i++) {
            sc.nextLine();
            int id = i + 1;
            String name = sc.nextLine();
            String Date = sc.nextLine();
            Double Diem1 = sc.nextDouble();
            Double Diem2 = sc.nextDouble();
            Double Diem3 = sc.nextDouble();
            ds[i] = new ThiSinh(id, name, Date, Diem1, Diem2, Diem3);
            _max = Math.max(_max, ds[i].DiemTong);
        }
        
        for (int i = 0; i < n; i++) {
            if (ds[i].DiemTong == _max) {
                System.out.println(ds[i]);
            }
        }
    }
}
