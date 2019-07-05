import bpy
import time
import os


filename = "Data.txt"
directory = r"D:\Uni\Arch\project\MIPSproject"


fullpath = os.path.join(directory, filename)


file = open(fullpath, "r")
file_str = file.read()
file_str.replace(" ", "")
file_arr = file_str.split("-")

file_dic = {"PCEn": "", "PCWrite":"", "Branch":"", "PCSrc":"", "ALUOp":"", "ALUSrcB":"", "ALUSrcA":"", "RegWrite":"", "IorD":"", "MemWrite":"", "IRWrite":"", "State": "", "INT":"", "INTB":"", "NMI":""}

list_of_dics = []

for moment in file_arr:
    file_dic = {}
    moment_arr =  moment.split(",")
    for value in moment_arr:
        value_arr = value.split(":")
        if len(value_arr) == 1:
            continue
        file_dic[value_arr[0]] = value_arr[1]
    list_of_dics.append(file_dic)

#bpy.data.objects["Text.021"].data.body = str(list_of_dics)


clock_list = ["Cube.102", "Cube.103", "Cube.104", "Cube.105", "Cube.106", "Cube.107", "Cube.108", "Cube.109"]

color = (1, 0, 0)
for name in clock_list:
    obj = bpy.data.objects[name]

    obj.active_material.diffuse_color = color

PCEn_wires = ["Cube.019", "Cube.088", "Cube.090", "Cube.091", "Cube.092", "Cube.093" ]

PCWrite_wires = [ "Cube.084"]

Branch_wires = [ "Cube.083"]

PCSrc_wires = [ "Cube.082", "Cube.082"]

ALUControl_wires =[ "Cube.081", "Cube.086"]

ALUSrcB_wires = [ "Cube.080", "Cube.085"]

ALUSrcA_wires = [ "Cube.078", "Cube.079"]

RegWrite_wires = [ "Cube.076","Cube.077" ]

IorD_wires = [ "Cube.094","Cube.095" ]

MemWrite_wires = [ "Cube.096","Cube.097" ]

IRWrite_wires = [ "Cube.098","Cube.099","Cube.100","Cube.101" ]


states = { "0000": "Fetch", "0001": "Decode", "0010": "MemAdr", "0011":"MemRead", "0100":"MemWriteBack", "0101":"MemWrite", "0110" :"Execute", "0111": "ALUWriteBack", "1000": "Branch", "1111": "Interupt", "1110" :"Interupt" , "1101": "NMIntrupt"}  





start = time.clock()

repetitions = 0

dictionary_index = 0
dictionary_length = len(list_of_dics)


bpy.ops.wm.redraw_timer(type='DRAW_WIN_SWAP', iterations=1)
while(dictionary_index < dictionary_length):
    
    if (time.clock() - start < 0.1): continue
    
    
    

    repetitions += 1
    start = time.clock()
    if (color == (0, 0, 1)): 
        color = (1, 0, 0)
    else:
        color = (0, 0, 1)
    for name in clock_list:
        obj = bpy.data.objects[name]

        obj.active_material.diffuse_color = color
        
    
    for key in list(list_of_dics[dictionary_index].keys()):
        
        if key == "State":
            bpy.data.objects["Text.021"].data.body = list_of_dics[dictionary_index][key]
            bpy.data.objects["Text.016"].data.body = states[list_of_dics[dictionary_index][key]]
        
        if key == "PCEn":
            for wire in PCEn_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        if key == "PCWrite":
            for wire in PCWrite_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        if key == "Branch":
            for wire in Branch_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
    
        if key == "PCSrc":
            for wire in PCSrc_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
    
        if key == "ALUControl":
            for wire in ALUControl_wires:
                
                if list_of_dics[dictionary_index][key] == "00":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        if key == "ALUOp":
            for wire in ALUControl_wires:
                
                if list_of_dics[dictionary_index][key] == "00":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        if key == "ALUSrcB":
            for wire in ALUSrcB_wires:
                
                if list_of_dics[dictionary_index][key] == "00":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        if key == "ALUSrcA":
            for wire in ALUSrcA_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
              
        if key == "IorD":
            for wire in IorD_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
       
        if key == "MemWrite":
            for wire in MemWrite_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        
        if key == "IRWrite":
            for wire in IRWrite_wires:
                
                if list_of_dics[dictionary_index][key] == "0":
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0.05, 0.5, 0.5)
                else:
                    obj = bpy.data.objects[wire]
                    obj.active_material.diffuse_color = (0, 0, 1)
                    
        intr_str =  "INT:\t\t"
        intr_str += list_of_dics[dictionary_index]["INT"]
        intr_str +=  "\nINTD:\t"
        intr_str += list_of_dics[dictionary_index]["INTB"]
        intr_str +=  "\nNMI:\t"
        intr_str += list_of_dics[dictionary_index]["NMI"]                
        bpy.data.objects["Text.018"].data.body = intr_str
    
    if color == (0,0, 1):
        dictionary_index += 1             
    bpy.ops.wm.redraw_timer(type='DRAW_WIN_SWAP', iterations=1)   
    if (repetitions > 200): break



