import java.util.*;

class SinhVien{
    public String Year, MSV, Name, Class, Email;

    SinhVien(String MSV, String Name, String Class, String Email) {
        this.MSV = MSV;
        this.Name = Name;
        this.Class = Class;
        this.Email = Email;
        this.Year = "20" + Class.substring(1, 3);
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %s" , MSV, Name, Class, Email);
    }
}


public class J05023_Liet_ke_sinh_vien_theo_khoa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ArrayList<SinhVien> list = new ArrayList<>();
        int n = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < n; i ++) {
            String MSV = sc.nextLine();
            String Name = sc.nextLine();
            String Class = sc.nextLine();
            String Email = sc.nextLine();
            list.add(new SinhVien(MSV, Name, Class, Email));
        }

        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i ++) { 
            String Year = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN KHOA " + Year + ":");
            for (SinhVien x : list) {
                if (x.Year.equals(Year)) {
                    //System.out.println(x.Year);
                    System.out.println(x);
                }
            }
        }
    }
}
