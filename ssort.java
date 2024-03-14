import java.util.Scanner;

public class ssort 
{
    public static void sort(int a[])
    {
    for(int i=0;i<a.length-1;i++)
    {
        int min=i;
        for(int j=i+1;j<a.length;j++)
        {
            if(a[min]>a[j])
            {
              min=j;
            }
        }

        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

    System.out.println("The sorted array is:\n");
    for(int i=0;i<a.length;i++)
    {
        System.out.print(a[i]+"\t");
    }
}

public static void main(String args[])
{
     Scanner sc=new Scanner(System.in);
     ssort ob=new ssort();
    int a[]={1,4,5,76,89,33,55,00,21,56};
    ob.sort(a);
}

}
