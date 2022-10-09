# Rod-Cutting-Problem-Using-DP

Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. We have to sell that rod in some pieces in such a way that we got maximum profit. So our task is to determine the maximum value obtainable by cutting up the rod and selling the pieces.

-> Optimization(Using Dynamic Programming)
Let us see how this problem possesses both important properties of a Dynamic Programming (DP) Problem and can efficiently be solved using Dynamic Programming.
 Optimal Substructure: 
We can get the best price by making a cut at different positions and comparing the values obtained after a cut. We can recursively call the same function for a piece obtained after a cut.

