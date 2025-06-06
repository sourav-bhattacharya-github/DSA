class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {
//         // Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//         // Output: [1,2,3,6,9,8,7,4,5]
//         vector<int> ans;

//         int row = matrix.size();    // 9,
//         int col = matrix[0].size(); // 3,

//         int total = row * col; //

//         // index
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row - 1;
//         int endingCol = col - 1;

//         int count = 0;

//         while (count < total)
//         {
//             // print starting Row
//             for (int index = startingCol; index <= endingCol && count < total; index++)
//             {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             // print Ending Col
//             for (int index = startingRow; index <= endingRow && count < total; index++)
//             {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             // print Ending Row
//             for (int index = endingCol; index >= startingCol && count < total; index--)
//             {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             // print starting Col
//             for (int index = endingRow; index >= startingRow && count < total; index--)
//             {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }

//         return ans;
//     }
// };
