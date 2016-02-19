import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Scanner;

public class onedarray {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn = new Scanner(System.in);
        int[] arr = new int[100];
        int n = 0;
        n = scn.nextInt();
        for(int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            int sum = arr[i];
            if(sum < 0) {
                count++;
            }
            for(int j = i + 1; j < n; j++) {
                sum += arr[j];
                if(sum < 0) {
                    //System.out.println(i + " " + j);
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
