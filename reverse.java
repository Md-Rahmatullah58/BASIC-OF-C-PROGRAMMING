import java.util.Scanner;
class reverse
{
    public static void main(String args[])
    {
        int n,r;
        System.out.print("Enter number:");
        Scanner q=new Scanner(System.in);
        n=q.nextInt();
        while(n>0)
        {
            r=n%10;
            System.out.print(r+" ");
            n=n/10;

        }
    }
}