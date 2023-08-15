import java.util.HashSet;
import java.util.Set;

public class Main {

    boolean setMethod(int[] array){
        for(int i = 0; i < array.length; i++){
            Set<Integer> s = new HashSet<Integer>();
            if(s.isEmpty()){
                s.add(array[i]);
            }
            else if(s.contains(array[i])){
                return false;
            }
            else {
                s.add(array[i]);
            }
        }
        return true;
    }
    boolean yay(int[] array){
        for(int i = 0; i < array.length; i++){
            for(int j = i+1; j < array.length; j++){
                if(array[i] == array[j]){
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Main mainInstance = new Main();
        int[] hi = {1, 2, 3, 3};

        System.out.println(mainInstance.yay(hi));
        System.out.println(mainInstance.setMethod(hi));
    }
}
