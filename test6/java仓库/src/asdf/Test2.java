package asdf;

public class Test2 {
    public static void main(String[] args) {
        long start =System.currentTimeMillis();
        for(int i =1;i<=10000;i++)
        {
            boolean flag= isPrime(i);
            if (flag){
                System.out.println(i);
            }
        }
        long end=System.currentTimeMillis();
        System.out.println(end-start);
    }
    public static boolean isPrime(int number){
        for (int i =2;i<number;i++) {
            if (number%i==0)
            {
                return false;
            }
        }
        return true;
    }

}
