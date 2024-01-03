import java.util.Scanner;
class natural
{
    public static void main(String args[])
    {
        int n,i,sum=0;
        System.out.print("Enter the rang :");
        Scanner r=new Scanner(System.in);
        n=r.nextInt();
        for(i=1;i<=n;i++)
       {
        //System.out.print(i+" ");
        sum=sum+i;
       }
       System.out.print("Sum of natural number is\n"+sum);
   }
}
