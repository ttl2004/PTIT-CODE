import java.util.*;

class SinhVien{
    public String MSV, Name, Class, Email;

    SinhVien(String MSV, String Name, String Class, String Email) {
        this.MSV = MSV;
        this.Name = Name;
        this.Class = Class;
        this.Email = Email;
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %s" , MSV, Name, Class, Email);
    }
}
public class J05022_Liet_ke_sinh_vien_theo_lop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ArrayList<SinhVien> list = new ArrayList<>();
        int n = sc.nextInt();
        sc.nextLine();

        for  (int i = 0; i < n; i ++) {
            String MSV = sc.nextLine();
            String Name = sc.nextLine();
            String Class = sc.nextLine();
            String Email = sc.nextLine();
            list.add(new SinhVien(MSV, Name, Class, Email));
        }

        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i ++) { 
            String Class = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN LOP " + Class + ":");
            for (SinhVien x : list) {
                if (x.Class.equals(Class)) {
                    System.out.println(x);
                }
            }
        }
    }
}
