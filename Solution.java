import java.util.*;

public class Solution {

        public static void main(String[] args) {
        Scanner myScanner = new Scanner(System.in);
    
       
        int N = myScanner.nextInt();
        
        if(N<=10000 && N>=0){
            for(int i = 1; i<=N; i++){
                if(i%3==0 && i%5==0){
                    System.out.println("CodeJam");
                }else if(i%5==0){
                    System.out.println("Jam");
                }else if(i%3 == 0){
                    System.out.println("Code");
                }else{
                    System.out.println(i);
                }
            }
        }
        
        myScanner.close();
    }
}