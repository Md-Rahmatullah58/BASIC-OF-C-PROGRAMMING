import java.util.Scanner;
class max
{
    public static void main(String args[])
    {
        int a,b,c,larg=0;
        System.out.print("Enter three number :");
        Scanner r=new Scanner(System.in);
        a=r.nextInt();
        b=r.nextInt();
        c=r.nextInt();
        larg=(a>=b)?(a>=c?b:c) : (b>s=c?b:c);
        System.out.print("Greatest number "+larg);
    }
}