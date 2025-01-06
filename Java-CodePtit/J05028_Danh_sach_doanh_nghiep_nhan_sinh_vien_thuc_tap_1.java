import java.util.*;

class CongTy{
    public String ID, NameCompany;
    public Integer SoLuong;

    public CongTy(String id, String nameCompany, Integer soLuong) {
        this.ID = id;
        this.NameCompany = nameCompany;
        this.SoLuong = soLuong;
    }

    @Override
    public String toString() {
        return ID + " " + NameCompany + " " + SoLuong;
    }
}
public class J05028_Danh_sach_doanh_nghiep_nhan_sinh_vien_thuc_tap_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<CongTy> list = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            sc.nextLine();
            String ID = sc.nextLine();
            String NameCompany = sc.nextLine();
            Integer SoLuong = sc.nextInt();
            list.add(new CongTy(ID, NameCompany, SoLuong));
        }

        Collections.sort(list, new Comparator<CongTy>() {
            @Override
            public int compare(CongTy o1, CongTy o2) {
                if (o1.SoLuong.equals(o2.SoLuong) == false) {
                    return o2.SoLuong.compareTo(o1.SoLuong);
                } 
                else return o1.ID.compareTo(o2.ID);
            }
        });

        for (CongTy ct : list) {
            System.out.println(ct);
        }
    }
}
