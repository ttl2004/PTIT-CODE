import java.util.*;
import java.lang.Math.*;

class MatHang{
    public int Id;
    public String Name, Type;
    public double GiaMua, GiaBan, LoiNhuan;
    public MatHang(int Id, String Name, String Type, double GiaMua, double GiaBan){
        this.Id = Id;
        this.Name = Name;
        this.Type = Type;
        this.GiaMua = GiaMua;
        this.GiaBan = GiaBan;
        this.LoiNhuan = GiaBan - GiaMua;
    }

    @Override
    public String toString(){
        return Id + " " + Name + " " + Type + " " + String.format("%.2f", LoiNhuan);
    }
}
public class J05010_Sap_xep_danh_sach_mat_hang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<MatHang> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            sc.nextLine();
            String Name = sc.nextLine();
            String Type = sc.nextLine();
            double GiaMua = sc.nextDouble();
            double GiaBan = sc.nextDouble();
            list.add(new MatHang(i, Name, Type, GiaMua, GiaBan));
        }
        Collections.sort(list, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                return -Double.compare(o1.LoiNhuan, o2.LoiNhuan);
            }
        });

        for (MatHang i : list) {
            System.out.println(i);
        }
    }
}
