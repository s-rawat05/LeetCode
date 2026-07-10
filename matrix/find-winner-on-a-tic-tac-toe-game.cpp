class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> rows(3, 0), cols(3, 0);
        int diagonal = 0, antiDiagonal = 0;

        int player = 1; // A = 1, B = -1

        for (auto &move : moves) {
            int row = move[0];
            int col = move[1];

            rows[row] += player;
            cols[col] += player;

            if (row == col)
                diagonal += player;

            if (row + col == 2)
                antiDiagonal += player;

            if (abs(rows[row]) == 3 ||
                abs(cols[col]) == 3 ||
                abs(diagonal) == 3 ||
                abs(antiDiagonal) == 3) {
                return player == 1 ? "A" : "B";
            }

            player *= -1; // Switch player
        }

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};