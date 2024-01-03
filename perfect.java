import java.util.Scanner;
class perfect
{
    public static void main(String args[])
    {
        int n,i,sum=0;
        System.out.print("Enter the number:");
        Scanner r=new Scanner(System.in);
        n=r.nextInt();
        for(i=1;i<=n;i++)//i<n
        {
            if(n%i==0)
            {
                //sum=sum+i;
                sum++;
            }
        }
            //if(sum==n)
            if(sum==2)
                System.out.print("Perfect number");// prime or not prime
            else
                System.out.print("Not perfect number");
                
    }
}