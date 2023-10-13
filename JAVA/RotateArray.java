class RotateArray{
    int array[];
    

    RotateArray(int arr[]){
      
        this.array = arr;
    }

    public void rotateArr(int D,int A){
       
       for(int i = 0;i<A;i++){
        int temp = array[0];
            for(int j = 0; j< D-1; j++){
                array[j] = array[j+1];
            }
            array[D-1] = temp;
       }

       for(int i = 0; i<D; i++){
            System.out.print(array[i]+" ");
        }
    }

    




    public static void main(String[]args){
        int [] arr = {1,2,3,4,5};
        
        RotateArray r1 = new RotateArray(arr);
        
        r1.rotateArr(5,2);
        
    }
}