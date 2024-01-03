import java.util.Scanner;
class postiveornagative
{
    public static void main(String args[])
    {
        int a;
        System.out.print("Enter two number");
        Scanner r=new Scanner(System.in);
        a=r.nextInt();
       // b=r.nextInt();
        if(a>=0)
        {
            System.out.print("Positive number");
        }
        else
        {
            System.out.print("Nagative");
        }
    }
}