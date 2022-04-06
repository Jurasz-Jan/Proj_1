from tkinter import *
root = Tk()
n=100


def click1():
    global n
    n= n+1
    print(n)
    



def change_text():
    global n
    n=n+1
    my_var.set(n)
    
    
my_var = StringVar()
my_var.set(0)
label = Label(root,textvariable=my_var,fg="red")
button = Button(root,textvariable=my_var,command = change_text)
button.pack()
label.pack()
my_var.set(n)


root.mainloop()





