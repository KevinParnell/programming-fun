import sys
import tkinter
from tkinter import messagebox

from tkinter import Tk
top = tkinter.Tk()
root = Tk()
root.wm_title("Evanescence")

def helloCallBack():
   messagebox.showinfo( "Wake me up inside", "I CAN'T WAKE UP")

B = tkinter.Button(top, text ="Wake me up", command = helloCallBack)

B.pack()
top.mainloop()
