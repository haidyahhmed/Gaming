# Game:- Hedgehogs in a Hurry (Igel Argern)
- This game is a sort of racing game for 2-6 players (best 4).
- It consists of
  - 24 identical tokens (representing hedgehogs) with different colors (Red - Blue - Green - Yellow - Pink - Orange).
  - A board with 6 rows and 9 columns. 
  - Die. 
- the first column of the board is called "start" where the players place their tokens. 
- the last column of the board is called "ziel" which means goal or target.
- there are 6 obstacles or pits in the board. (one obstacle in each lane or row)
- To set up the game, Each player gets four tokens of a single color that he or she must move from the "start" column to the "ziel" column.
- The goal of the game is to have all the your "hedgehogs" start at the "start" column and be the first to get three of your four hedgehogs to the finish line ("ziel" column).
- ![index](https://user-images.githubusercontent.com/104442250/165404529-6247eefd-edf8-4698-b788-de101e997d87.jpg)

# Instructions and rules of the game:
- pieces sharing a square stack on top of each other.
- In turn order, Each player puts down one token in the "start" column but you do not stack a piece on top of another piece until all the other places in the column is filled. (you have to place the tokens in a balanced way. you always have to place it on one of the shortest stacks, unless it already has one of your pieces) 
- In case of stack, the only piece that can be moved is the piece on the top.
- You cannot move your piece if it is placed on an obstacke until there are no pieces left behind, then the obstackle square turns into normal square.
- After rolling the die, if it was matched with empty lane/raw, has no tokens in it, you have to roll the die again until it matches with suitable lane.   

# How to play:
- A turn consists of: 
  - rollind the die,
  - optionally moves one of his pieces up or down one row (we call this a "sideways" move, because the piece is moved sideways relative to the direction of travel toward the finish line), 
  - and then moving an piece (either his/her or another player) that in the matching lane with die forward one space.
 - The first player gets three of his/her tokens to the "ziel" is the winner.   

# Time Excution & Parameters
- **The change of time with the number of players:**
  The more players there are, the more time the game takes.
  - The Time it takes for **two players** to place their tokens **(~ 64.404 sec)**.
  ![2players](https://user-images.githubusercontent.com/104447022/165968653-48bb5b25-c99e-4bfd-8f26-582b855338f3.png)

  - The Time it takes for **four players** to place their tokens **(~ 127.048 sec)**.
  ![4players](https://user-images.githubusercontent.com/104447022/165968716-a7718701-4787-4cb5-b310-a5ab3446546f.png)

  - The Time it takes for **six players** to place their tokens **(~ 277.644 sec)**.
  ![6 players](https://user-images.githubusercontent.com/104447022/165968816-b57faa7e-0099-42af-830c-1c6e1aad4e8e.png)

- **The change of time with the state of the piece:**
  If the piece is place on an obstacle square the time of getting suitable move increases compared to normal square.
  - In **a normal square** it takes a very small time **(2000 usec ~ 0.002 sec)**.
  ![Screenshot 2022-04-27 0118211](https://user-images.githubusercontent.com/104442250/165408268-5f569d03-8d98-4624-ae88-7549257d5356.png)

  - In **an obstacle square** it takes much time **(2894000 usec ~ 2.894 sec)**.
![Screenshot 2022-04-27 0122491](https://user-images.githubusercontent.com/104442250/165408617-3b0f8025-649c-4b7b-9b8b-116f4b772c3c.png)
