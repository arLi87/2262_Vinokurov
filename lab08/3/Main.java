public class Main {
    public static void main(String[] args) {
        int[][] mas = {
            {4, 7, 2},
            {9, 0, 5},
            {1, 3, 0}
        };

        int foundRow = -1;
        int foundCol = -1;

        search: {
            for (int i = 0; i < mas.length; i++) {
                for (int j = 0; j < mas[i].length; j++) {
                    if (mas[i][j] == 0) {
                        foundRow = i;
                        foundCol = j;
                        break search;
                    }
                }
            }
        }

        if (foundRow != -1) {
            System.out.println("Первый 0 в: " + foundRow + ", " + foundCol);
        } else {
            System.out.println("0 не найден");
        }
    }
}