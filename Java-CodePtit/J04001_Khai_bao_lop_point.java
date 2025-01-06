import java.util.*;
import static java.lang.Math.*;
class Point{
    private double x;
    private double y;
    public Point() {
        x = 0;
        y = 0;
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
public class J04001_Khai_bao_lop_point {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            double x1 = sc.nextDouble(), y1 = sc.nextDouble();
            Point p1 = new Point(x1, y1);
            double x2 = sc.nextDouble(), y2 = sc.nextDouble();
            Point p2 = new Point(x2, y2);
            double kc = p1.distance(p2);
            System.out.println(String.format("%.4f", kc));  
        }
    }
}