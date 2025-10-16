// okay lets try something out fr now

class Main { // remember to add public in actual Main.java files and that your silly ass is just removing an annoying warning/error in zed

    public static void main(String[] args) {
        int a = 1;

        for (int i = 1; i <= 5; i++) {
            String lineOr = " and "; // WHY THE FUCK IS STRING CAPITALIZED BUT NOT INT OR FLOAT OR CHAR??????
            if (i == 5) {
                lineOr = "\n";
            }
            System.out.print(a);
            System.out.print(lineOr);
            a++;
        }
    }
}
