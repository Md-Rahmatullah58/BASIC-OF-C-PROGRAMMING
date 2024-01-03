import java.util.Sscanner;
class leap
{
    public static void main(String args[])
    {
        int y;
        System.out.print("\nEnter any year:\n");
        Scanner r=new Scanner(System.in);
        y=r.nextInt();
        if(y%100==0 && y%400==0 || y%100!=0 && y%4==0)
        {
            System.out.print("Leap year");
        }
        else
        {
            System.out.print("Not leap year");
        }
    }
}