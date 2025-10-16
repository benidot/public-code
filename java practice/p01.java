// ENTIRELY CHAT GPT HERE IM TRYING TO LEARN OKAY??
// copy of c++ p04
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        double numba;

        for (int i = 0; i <= 5; i++) {
            System.out.println(); // prints a blank line
        }

        Scanner input = new Scanner(System.in);
        System.out.print("plug a numba here >> ");
        numba = input.nextDouble();
        input.close();

        System.out.println("yo numba times too is " + (numba * 2));
    }
}
