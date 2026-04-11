import java.util.*;

public class HashLearn {
    public static void main(String[] args) {
        HashMap<String, Integer> HSMP = new HashMap<>();


        //Insertion
        HSMP.put("India",120);
        HSMP.put("Nepal",240);
        HSMP.put("China",200);
      
        //search
        if(HSMP.containsKey("Chez")){
            System.out.println("true");
        }
        else{
            System.out.println("False");

        }
    }
}
