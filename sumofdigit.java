import java.util.Scanner;
class sumofdigit
{
    public static void main(String args[])
    {
       int n,r,s=0;
        System.out.print("Enter the number :");
        Scanner m=new Scanner(System.in);
        n=m.nextInt();
        while(n!=0)
        {
            r=n%10;
            s=s+r;
            n=n/10;
        }
        System.out.print("Sum of digit "+s);
    }
}