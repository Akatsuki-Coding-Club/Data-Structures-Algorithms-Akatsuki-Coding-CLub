public class FirstSetBit {
    int array[];

    FirstSetBit(int arr[]){
        this.array = arr;
    }


    public void firstSetBit(int target){
        for(int i = array.length-1; i>=0; i--){
            if(array[i] > target || (target-array[i])<0){
                continue;
                
            }else if(target == 0){
                break;
            }else{
                target -= array[i];
                System.out.println(i);
            }
        }

    }


    public static void main(String[]args){
        int arr[] = {2,7,11,15}; 
        FirstSetBit f1 = new FirstSetBit(arr);
        f1.firstSetBit(9);
    }
}
