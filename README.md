# Game:- Hedgehogs in a Hurry (Igel Argern)
- This game is a sort of racing game for 2-6 players (best 4).
- Each player choses a color for his tokens.
- The standard game is played on a grid with 6 rows and 9 columns.
- Each player has four tokens (representing hedgehogs) that he or she must move from the left column to the right column.
- pieces sharing a square stack on top of each other. Only the piece on the top of a stack may move.


     ![index](https://user-images.githubusercontent.com/104442250/165404529-6247eefd-edf8-4698-b788-de101e997d87.jpg)

# Game Begin
- rolls the die,
- optionally moves one of his piece up or down one row (we call this a "sideways" move, because the piece is moved sideways relative to the direction of travel toward the finish line), and
- chooses one piece (either his or another player's) in the row indicated by the die roll and moves it one space to the right (i.e., "forward").
# Rules
- You cannot move your piece unless it is on the top of the stack.
- You cannot move your piece if it is placed on an obstacke.
- You can only pass the obstacle when there are no pieces before the piece on obstacle.
# Time Excution & Parameters
- **The change of time with the number of players:**
  The more players there are, the more time the game takes.
  The Time it takes for **two players** to place their tokens **(~ 64.404 sec)**.
  ![2players](https://user-images.githubusercontent.com/104447022/165968653-48bb5b25-c99e-4bfd-8f26-582b855338f3.png)

  The Time it takes for **four players** to place their tokens **(~ 127.048 sec)**.
  ![4players](https://user-images.githubusercontent.com/104447022/165968716-a7718701-4787-4cb5-b310-a5ab3446546f.png)

  The Time it takes for **six players** to place their tokens **(~ 277.644 sec)**.
  ![6 players](https://user-images.githubusercontent.com/104447022/165968816-b57faa7e-0099-42af-830c-1c6e1aad4e8e.png)

- **The change of time with the state of the piece:**
  if the piece is place on an obstacle square the time of getting suitable move increases compared to normal square.
  In **a normal square** it takes a very small time **(2000 usec ~ 0.002 sec)**.
  ![Screenshot 2022-04-27 0118211](https://user-images.githubusercontent.com/104442250/165408268-5f569d03-8d98-4624-ae88-7549257d5356.png)

  In **an obstacle square** it takes much time **(2894000 usec ~ 2.894 sec)**.
![Screenshot 2022-04-27 0122491](https://user-images.githubusercontent.com/104442250/165408617-3b0f8025-649c-4b7b-9b8b-116f4b772c3c.png)
