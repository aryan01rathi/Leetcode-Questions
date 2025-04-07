class Solution {
    public void setZeroes(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        ArrayList<Integer> arrRow = new ArrayList<>();
        ArrayList<Integer> arrCol = new ArrayList<>();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j]==0){
                    arrRow.add(i);
                    arrCol.add(j);
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(arrRow.contains(i) || arrCol.contains(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
}