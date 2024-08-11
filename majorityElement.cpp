/*
    Boyer-Moore Voting Algorithm

    X = [1, 2, 3, 2, 3, 4, 3];

    X[i] = 1, maj = 1, c = 1
    X[i] = 2, maj = 1, c = 0
    X[i] = 3, maj = 3, c = 1
    X[i] = 2, maj = 3, c = 0
    X[i] = 3, maj = 3, c = 1
    X[i] = 4, maj = 3, c = 0
    X[i] = 3, maj = 3, c = 1 
*/
int Solution:: majorityElement(const vector<int> &A) {
    int majorityIndex = 0;
    int count = 0;
    for (int i = 0; i< A.size(); i++){
        if (count == 0) {
            majorityIndex = i;
        }
        if (A[i] == A[majorityIndex]) {
            count = count+1;
        }
        else {
            count = count - 1;
        }
    }
    return A[majorityIndex];
}