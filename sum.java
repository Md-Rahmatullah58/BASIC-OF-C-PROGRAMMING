import java.util.Scanner;
class sum
{
    public static void main(String args[])
    {
        int a,b,sum=0;
        System.out.print("Enter two number :");
        Scanner r=new Scanner(System.in);
        a= r.nextInt();
        b= r.nextInt();
        sum=a+b;
        System.out.print("\nSum of two number\n"+sum);
    }
}
