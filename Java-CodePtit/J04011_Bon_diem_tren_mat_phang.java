import java.util.Scanner;

class Point3D {
    public int x, y, z;

    Point3D(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    static boolean check(Point3D p1, Point3D p2, Point3D p3, Point3D p4) {
        Point3D v1 = new Point3D(p2.x - p1.x, p2.y - p1.y, p2.z - p1.z);
        Point3D v2 = new Point3D(p3.x - p1.x, p3.y - p1.y, p3.z - p1.z);
        Point3D v3 = new Point3D(p4.x - p1.x, p4.y - p1.y, p4.z - p1.z);

        int cx = v2.y * v3.z - v2.z * v3.y;
        int cy = v2.z * v3.x - v2.x * v3.z;
        int cz = v2.x * v3.y - v2.y * v3.x;

        int check = v1.x * cx + v1.y * cy + v1.z * cz;
        return check == 0;
    }
}
// Bai hoi lo, cu submit lien tuc neu may man thi se AC :)))

public class J04011_Bon_diem_tren_mat_phang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
        Point3D p1 = new Point3D(sc.nextInt(),sc.nextInt(),sc.nextInt());
        Point3D p2 = new Point3D(sc.nextInt(),sc.nextInt(),sc.nextInt());
        Point3D p3 = new Point3D(sc.nextInt(),sc.nextInt(),sc.nextInt());
        Point3D p4 = new Point3D(sc.nextInt(),sc.nextInt(),sc.nextInt());
        
        if(Point3D.check(p1,p2,p3,p4)){
            System.out.println("YES");
        } else{
            System.out.println("NO");
        }
        }
    }
}
