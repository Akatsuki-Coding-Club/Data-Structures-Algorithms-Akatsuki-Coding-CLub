import java.util.Scanner;

public class Insertionsort{

public static void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
    while(j>0 && arr[j-1]>arr[j])// It checks the comparision of numbers until the ith position and it makes sorted for every iteration. 
    {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    }
    System.out.println("After using InsertionSort");
    for(int i=0;i<n;i++){
        System.out.print(arr[i]+" ");
    }
    System.out.println();
}
    public static void main(String[] args){
        int arr[]={13,46,24,52,20,9};
        int n=arr.length;
       System.out.println("Before  using InsertionSort");
        for(int i=0;i<n;i++){
        System.out.print(arr[i]+" ");
        }
        System.out.println();
        insertionsort(arr,n);
    }
}