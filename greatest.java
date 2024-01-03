import java.util.Scanner;
class greatest
{
    public static void main(String args[])
    {
        int a,b,c;
        System.out.print("Enter three number :");
        Scanner r=new Scanner(System.in);
        a=r.nextInt();
        b=r.nextInt();
        c=r.nextInt();
        if(a>=b)
        {
            if(a>=c)
            {
                System.out.print("greatest number is "+a);
            }
            else
            {
                System.out.print("Greatest number is "+c);
            }
        }
        else
        {
            if(b>=c)
            {
                System.out.print("Greatest number is "+b);
            }
            else
            {
                 System.out.print("Greatest number is "+c);
            }
        }
    }
}
      