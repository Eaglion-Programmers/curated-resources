//Program to perform matrix operations
import java.util.*;

public class MultidimensionArrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows : ");
        int a = sc.nextInt();
        System.out.print("Enter the number of columns : ");
        int b = sc.nextInt();
        int[][] mat1;
        mat1 = new int[a][b];
        int[][] mat2;
        mat2 = new int[a][b];
        int[][] mat3;
        mat3 = new int[a][b];
        int[][] mat4;
        mat4 = new int[a][b];
        int[][] mat5;
        mat5 = new int[a][b];
        int[][] mat6;
        mat6 = new int[a][b];
        System.out.println("\nEnter the elements of two matrix..");
        System.out.print("\n");

        // Taking input of element for 1st matrix
        System.out.println("1st Matrix elements are :");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.printf("[%d][%d] = ", i, j);
                mat1[i][j] = sc.nextInt();
            }
        }
        System.out.println();

        // Taking input of element for 2nd matrix
        System.out.println("2nd Matrix elements are :");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.printf("[%d][%d] = ", i, j);
                mat2[i][j] = sc.nextInt();
            }
        }

        // displaying the 1st 2D array
        System.out.print("\n\nThe 1st Matrix is : \n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {

                System.out.print(" " + mat1[i][j]);
            }
            System.out.print("\n");
        }

        // displaying the 2nd 2D array
        System.out.print("\nThe 2nd Matrix is : \n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print(" " + mat2[i][j]);
            }
            System.out.print("\n");
        }

        System.out.println("\t________****________");
        int choice;
        do {
            System.out.println(
                    "\nPress 1 --> Addition of matrix\nPress 2 --> Substraction of matrix\nPress 3 --> Transpose of addition matrix\nPress 4 --> Transpose of substraction matrix\nPress 5 --> EXIT.. ");
            System.out.print("Enter your chice : ");
            choice = sc.nextInt();
            switch (choice) {

                case 1:
                    // int[][] mat3 = new int[a][b];
                    System.out.println("\nThe Addition of two matrix is :");
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            mat3[i][j] = mat1[i][j] + mat2[i][j];
                            System.out.print(" " + mat3[i][j]);
                        }
                        System.out.println();
                    }
                    break;

                case 2:
                    // int mat4[][] = new int[a][b];
                    System.out.println("\nThe Substraction of two matrix is :");
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            mat4[i][j] = mat1[i][j] - mat2[i][j];
                            System.out.print(" " + mat4[i][j]);
                        }
                        System.out.println();
                    }
                    break;
                case 3:
                    // int mat5[][] = new int[a][b];
                    System.out.println("\nThe transpose of addition matrix is :");
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            mat5[i][j] = mat3[j][i];
                            System.out.print(" " + mat5[i][j]);
                        }
                        System.out.println();
                    }
                    break;
                case 4:
                    // int mat6[][] = new int[a][b];
                    System.out.println("\nThe transpose of substraction matrix is :");
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < b; j++) {
                            mat6[i][j] = mat4[j][i];
                            System.out.print(" " + mat6[i][j]);
                        }
                        System.out.println();
                    }
                    break;
                case 5:
                    break;

                default:
                    System.out.println("Enter a valid choice!!");
            }
        } while (choice != 5);
        sc.close();
    }
}
