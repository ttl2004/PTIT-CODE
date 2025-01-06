import java.util.*;

class SinhVien{
    public String Msv, Name, Lop, Email;
    public SinhVien(String Msv, String Name, String Lop, String Email){
        this.Msv = Msv;
        this.Name = Name;
        this.Lop = Lop;
        this.Email = Email;
    }

    @Override
    public String toString(){
        return Msv + " " + Name + " " + Lop + " " + Email;
    }
}

public class J05021_Sap_xep_theo_ma_sinh_vien {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<SinhVien> list = new ArrayList<>();
        while (scanner.hasNextLine()) {
            String id = scanner.nextLine();
            String name = scanner.nextLine();
            String className = scanner.nextLine();
            String email = scanner.nextLine();
            list.add(new SinhVien(id, name, className, email));
        }

        // Sắp xếp danh sách sinh viên theo mã sinh viên
        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return o1.Msv.compareTo(o2.Msv);
            }
        });

        // Xuất ra danh sách sinh viên đã sắp xếp
        for (SinhVien a : list) {
            System.out.println(a);
        }

    }
}
