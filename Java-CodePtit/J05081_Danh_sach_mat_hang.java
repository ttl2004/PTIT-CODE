import java.util.*;

class MatHang {
    public String Id;
    public String Name;
    public String Donvi;
    public long GiaMua;
    public long GiaBan;
    public long LoiNhuan;

    public MatHang(String Id, String Name, String Donvi, long GiaMua, long GiaBan) {
        this.Id = Id;
        this.Name = Name;   
        this.Donvi = Donvi;
        this.GiaMua = GiaMua;
        this.GiaBan = GiaBan;
        this.LoiNhuan = GiaBan - GiaMua;
    }

    @Override
    public String toString() {
        return Id + " " + Name + " " + Donvi + " " + GiaMua + " " + GiaBan + " " + LoiNhuan;
    }
}
public class J05081_Danh_sach_mat_hang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);    
        int n = sc.nextInt();
        ArrayList<MatHang> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            String id = "MH";
            if (i < 10) {
                id += "00" + Integer.toString(i);
            } 
            else if (i < 100) {
                id += "0" + Integer.toString(i);
            }   
            else {
                id += Integer.toString(i);
            }
            sc.nextLine();
            String name = sc.nextLine();
            String donvi = sc.nextLine();
            long giamua = sc.nextLong();
            long giaban = sc.nextLong();
            list.add(new MatHang(id, name, donvi, giamua, giaban));
        }
        Collections.sort(list, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                if (o1.LoiNhuan == o2.LoiNhuan) {
                    return o1.Id.compareTo(o2.Id);
                }
                return Long.compare(o2.LoiNhuan, o1.LoiNhuan);
            }
        });
        for (MatHang i : list) {
            System.out.println(i);
        }
    }
}
