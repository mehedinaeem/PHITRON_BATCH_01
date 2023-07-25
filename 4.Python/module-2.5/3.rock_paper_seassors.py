# player1=input("player:1 ")
# player2=input("player:2 ")
# while(player1==end or player2==end)
# {
# player1=input("player:1 ")
# player2=input("player:2 ")

# # print(player1)
# # print(player2)

# if(player1=="rock" and player2== "seassors"):
#     print("win player 1")
# elif(player2=="rock" and player1== "seassors"):
#     print("Win player 2")

# elif(player1=="rock" and player2== "paper"):
#     print("Win player 2")
# elif(player1=="paper" and player2== "rock"):
#     print("win player 1")

# elif(player1=="paper" and player2== "seassors"):
#     print("Win player 2")
# elif(player1=="seassors" and player2== "paper"):
#     print("player 1")
# else:
#     print("Tie")
# }

player1 = input("player 1: ")
player2 = input("player 2: ")

while player1 != "end" or player2 != "end":
    if player1.lower() == "rock" and player2.lower() == "scissors":
        print("Win player 1")
    elif player2.lower() == "rock" and player1.lower() == "scissors":
        print("Win player 2")
    elif player1.lower() == "rock" and player2.lower() == "paper":
        print("Win player 2")
    elif player1.lower() == "paper" and player2.lower() == "rock":
        print("Win player 1")
    elif player1.lower() == "paper" and player2.lower() == "scissors":
        print("Win player 2")
    elif player1.lower() == "scissors" and player2.lower() == "paper":
        print("Win player 1")
    else:
        print("Tie")
        
    player1 = input("player 1: ")
    player2 = input("player 2: ")
