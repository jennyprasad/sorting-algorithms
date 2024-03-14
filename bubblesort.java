import java.util.Scanner;

class bubblesort
{
   public void sort(int A[])
   {
    int i,j,temp;
    int n=A.length;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }

    }
    System.out.println("Array in ascending order:\n");
    for( i=0;i<n;i++)

    {
        System.out.println(A[i]+"\t");
    }
    

   } 

   public static void main(String args[])
   {
    Scanner sc=new Scanner(System.in);
    bubblesort ob=new bubblesort();
    int arr[]={1,4,5,76,89,33,55,00,21,56};
    ob.sort(arr);

    
   }
}