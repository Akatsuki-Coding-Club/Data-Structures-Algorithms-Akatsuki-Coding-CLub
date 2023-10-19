import java.util.Scanner;


public class OddEvenSortProgram {

    public static void main(String[] args) {
        Scanner cs=new Scanner(System.in);
        int size;
        System.out.print("Enter the size of the array:");
        size=cs.nextInt();
        int arr[]=new int[size],i;
        System.out.print("Enter the element of the array:");
        for(i=0;i<size;i++)
            arr[i]=cs.nextInt();

        System.out.print("Before Sorting Array Element are: ");
        for(i=0;i<size;i++)
            System.out.print(arr[i]+" ");

        int out,in,temp;
        for(out=0;out<size;out++){
            //Even
            for(in=0;in<size-1;in=in+2)
            {
                if(in!=size-1)
                    if(arr[in]>arr[in+1])
                    {
                        temp=arr[in];
                        arr[in]=arr[in+1];
                        arr[in+1]=temp;
                    }}

            //odd
            for(in=1;in<size-1;in=in+2)
            {
                if(in!=size-1)
                    if(arr[in]>arr[in+1])
                    {
                        temp=arr[in];
                        arr[in]=arr[in+1];
                        arr[in+1]=temp;
                    }}}

        System.out.print("\nAfter Sorting Array Element are: ");
        for(i=0;i<size;i++)
            System.out.print(arr[i]+" ");
        cs.close();

    }

}
