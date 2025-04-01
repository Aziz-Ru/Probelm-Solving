# Solving Questions With Brainpower

This Problem is Generate subset sum problem.

In Question , They give us a 2d array that questions where questions[i]=[points,brainpower].

The array describe the question of an exam where you can solve or skip each question. If you solve a question you will earn points but you unable to solve the next brainpower questions. If you skip i , you get to make the decisio on the next question.

Return the maximum points you can earn for the exam.

```
long long minimumSum(int ind, vector<vector<int>> &v, vector<long long> &dp) {
        if (ind >= v.size()) {
            return 0;
        }
        if (dp[ind] != -1) return dp[ind];
        long long point=v[ind][0],brainpower=v[ind][1]+1;
        long long notTake = 1LL* minimumSum(ind + 1, v, dp);
        long long take =point+minimumSum(ind + brainpower,v, dp);

        dp[ind] = max(take, notTake);
        return dp[ind];
    }

```
