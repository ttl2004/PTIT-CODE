import java.util.*;
import static java.lang.Math.*;
class Point{
    private double x;
    private double y;
    public Point() {
        this(0f, 0f);
    }
    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }
    public Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
   double distance(Point p) {
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }

    double distance(Point a, Point b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    @Override
    public String toString(){
        return x + " " + y;
    }
}

public class J04010_Dien_tich_hinh_tron_ngoai_tiep_tam_giac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            double x1 = sc.nextDouble(), y1 = sc.nextDouble();
            Point p1 = new Point(x1, y1);
            double x2 = sc.nextDouble(), y2 = sc.nextDouble();
            Point p2 = new Point(x2, y2);
            double x3 = sc.nextDouble(), y3 = sc.nextDouble();
            Point p3 = new Point(x3, y3);
            double a = p1.distance(p2), b = p2.distance(p3), c = p3.distance(p1);
            if (a + b <= c || a + c <= b || b + c <= a) {
                System.out.println("INVALID");
            } 
            else {
                double p = (a + b + c) / 2;
                double s = sqrt(p * (p - a) * (p - b) * (p - c));
                double R = a * b * c / (4 * s);
                System.out.printf("%.3f\n", PI * R * R);
            }
        }
    }
}
