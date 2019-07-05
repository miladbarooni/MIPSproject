from tkinter import *
# import random
import time


# first to make memory list
filename = r"D:\Uni\Arch\project\MIPSproject\Memory.txt"
memory = []
file = open(filename, "r")
file_str = file.read()
file_str = file_str.replace(" ", "")
# print (file_str)
file.close()
file_arr = file_str.split("-")
list_of_dics = []
for moment in file_arr:
    file_dic = {}
    moment_arr = moment.split(",")
    for value in moment_arr:
        value_arr = value.split(":")
        if len(value_arr) == 1:
            continue
        file_dic[value_arr[0]] = value_arr[1]
#     print (file_dic)
    memory.append(file_dic)

#print (memory)


root = Tk()
labels = []
memory = memory[0: -1]

# now time for tkinter
#print (len(memory))
for i in range(4):
    for j in range(4):
        label = Label(root, text = "test")
        label.grid(row=i, column = j, padx = 10, pady= 10)
        labels.append(label)
for k in range(len(memory)):
    time.sleep(0.01)
    for i in range(4):
        for j in range(4):
            if (int(memory[k]["Memo"+str(4*i+j+1)]) == 0):
                labels[4*i+j].config(text = "")
            else:
                labels[4*i+j].config(text = chr(int(memory[k]["Memo"+str(4*i+j+1)])))
    root.update()

#time.sleep(1000)
#root.destroy()
root.mainloop()

# root.destroy()
