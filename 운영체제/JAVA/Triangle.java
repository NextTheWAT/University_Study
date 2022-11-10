public class Triangle{
   public static void main(String[] args) {
	
	double base = 10.0;
	double height = 5.0;	

	Tri t = new Tri(base, heigt);
	
	
   }
}

class Tri{
   private double base;
   private double height;

   public void setbase(double base) {
      this.base = base;
   }
	public double getbase(){
	return base	
}
   public void setheight(double height) {
      this.height = height;
   }
	public double getheight(){
	return height;
}

   double findArea(double base, double height) {
      return base * height / 2 ;
   }
	

}


	