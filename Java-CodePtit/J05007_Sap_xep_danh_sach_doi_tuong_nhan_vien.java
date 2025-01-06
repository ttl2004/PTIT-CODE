import java.util.*;
class NhanVien{
    public String Id, Name, Gioitinh, Ngaysinh, Diachi, MSThue, NgayHopDong;
    public Integer Day, Month, Year;
    public NhanVien(String id, String name, String gioitinh, String ngaysinh, String diachi, String mSThue, String ngayHopDong) {
        Id = id;
        Name = name;
        Gioitinh = gioitinh;
        Ngaysinh = ngaysinh;
        Diachi = diachi;
        MSThue = mSThue;
        NgayHopDong = ngayHopDong;

        String[] temp = Ngaysinh.split("/");
        Day = Integer.parseInt(temp[0]);
        Month = Integer.parseInt(temp[1]);
        Year = Integer.parseInt(temp[2]);
    }

    @Override
    public String toString() {
        return Id + " " + Name + " " + Gioitinh + " " + Ngaysinh + " " + Diachi + " " + MSThue + " " + NgayHopDong;
    }
}

public class J05007_Sap_xep_danh_sach_doi_tuong_nhan_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<NhanVien> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            String Id = Integer.toString(i);
            while (Id.length() < 5) {
                Id = "0" + Id;
            }
            String Name = sc.nextLine();
            String Gioitinh = sc.nextLine();
            String Ngaysinh = sc.nextLine();
            String Diachi = sc.nextLine();
            String MSThue = sc.nextLine();
            String NgayHopDong = sc.nextLine();
            list.add(new NhanVien(Id, Name, Gioitinh, Ngaysinh, Diachi, MSThue, NgayHopDong));
        }

        Collections.sort(list, new Comparator<NhanVien>() {
            @Override
            public int compare(NhanVien o1, NhanVien o2) {
                if (o1.Year.equals(o2.Year) == false) {
                    return o1.Year.compareTo(o2.Year);
                } 
                else if (o1.Month.equals(o2.Month) == false) {
                        return o1.Month.compareTo(o2.Month);
                } 
                else return o1.Day.compareTo(o2.Day);
            }
        });

        for (NhanVien nv : list) {
            System.out.println(nv);
        }
    }
}
