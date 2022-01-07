import tkinter 
from tkinter import *
import random 
from tkinter import ttk


win=Tk()
options=[('Rock',0),('Paper',1),('Scissor',2)]

win.title('Rock Paper Scissors Game')
win.geometry('600x300')
win.config(background='#e4e4e4')
label=Label(win,text='Rock Paper Scissors',font=('Arial',15),bg='#e4e4e4')
label.place(x=200,y=0)


heading=Label(win,text='Your Options')
heading.place(x=50,y=50)



rock_button1=Button(win,text='Rock',bg='#e10f88',width=10,command=lambda:player_choice(options[0]))

rock_button1.place(x=150,y=80)


paper_button2=Button(win,text='Paper',bg='#8eeee4',width=10,command=lambda:player_choice(options[1]))
paper_button2.place(x=300,y=80)


scissor_button3=Button(win,text='Scissors',bg='#faf383',width=10,command=lambda:player_choice(options[2]))
scissor_button3.place(x=450,y=80)



score_heading=Label(win,text='Score :')
score_heading.place(x=55,y=130)



player_choicea=Label(win,text='You Selected :')
player_choicea.place(x=130,y=160)

player_scorea=Label(win,text='Your Score :')
player_scorea.place(x=350,y=160)





computer_choice=Label(win,text='Computer Selected :')
computer_choice.place(x=130,y=200)




computer_scorea=Label(win,text='Computer Score :')
computer_scorea.place(x=350,y=200)


who_win=Label(win,text="Let's start the game",fg='Green')
who_win.place(x=55,y=250)

player_score=0
computer_score=0

def player_choice(player_input):
    global player_score,computer_score
    computer_input=computermove()

    player_choicea.config(text='You Selected :' + str(player_input[0]))
    computer_choice.config(text='Computer Selected :' + str(computer_input[0]))
    if computer_input==player_input:
        who_win.config(text='Tie')
    elif (player_input[1]-computer_input[1])%3==1:
        player_score+=1
        player_scorea.config(text='Your score :' + str(player_score))
        who_win.config(text='Player_Wins')
    else:
        computer_score+=1
        computer_scorea.config(text='Computer Score :'+ str(computer_score))
        who_win.config(text='Computer_Wins')
   

def computermove():
    return random.choice(options)

win.mainloop()
