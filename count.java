import java.util.Scanner;
class count
{
    public static void main(String args[])
    {
        int n,c=0;
        System.out.print("Enter the number:");
        Scanner q=new Scanner(System.in);
        n=q.nextInt();
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        System.out.print("count of digit "+c);
    }
}