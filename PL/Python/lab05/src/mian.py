import os, codecs

def task1():
    dir_path = input("Enter file path: ")
    files = os.listdir(path = dir_path)
    print("Number of directories is ", len(files))
    for directory in files:
        print(directory)

def write_to_file(lines, file_path):
    data = open(file_path, 'w', encoding='utf-8')
    for line in lines:
        if line == '':
            break
        data.write(line + '\n')
    data.close()

def task2():
    file_path = input("Enter file path: ")
    data = open(file_path, 'r', encoding='utf-8')
    info = data.read()
    lines = info.split('\n')
    i = 1
    while i != len(lines) - 1:
        dta1 = lines[i].split(';')
        dta2 = lines[i + 1].split(';')
        if dta1 == [''] or dta2 == ['']:
            break
        age1 = int(dta1[2])
        age2 = int(dta2[2])
        if age1 > age2:
            lines[i], lines[i + 1] = lines[i + 1], lines[i]
            i = 1
        else:
            i += 1
    data.close()
    write_to_file(lines, file_path)

def task3():
    file_path = input("Enter file path: ")
    data = open(file_path, 'r', encoding='utf-8')
    info = data.read()
    lines = info.split('\n')
    group = input("Enter group name: ")
    for i in range(len(lines)):
        dta = lines[i].split(';')
        if dta == ['']:
            break
        no = dta[0]
        name = dta[1]
        age = dta[2]
        group_name = dta[3]
        if group == group_name:
            new_age = str(int(age) + 1)
            new_line = no + ";" + name + ";" + new_age + ";" + group_name
            lines[i], new_line = new_line, lines[i]
    data.close()
    write_to_file(lines, file_path)
    print("Task is complete!")

def task4():
    file_path = input("Enter file path: ")
    name = input("Enter name: ")
    age = input("Enter age: ")
    group = input("Enter group: ")
    line = name + ";" + age + ";" + group

    files = open(file_path, 'r', encoding='utf-8')
    info = files.read()
    lines = info.split('\n')
    for i in range(len(lines)):
        dta = lines[i].split(';')
        if dta == ['']:
            no = int(no) + 1
            line = str(no) + ";" + name + ";" + age + ";" + group 
            break
        no = dta[0]
    files.close()



    files = open(file_path, 'a', encoding='utf-8')
    files.write(line + '\n')
    files.close()
    files = open(file_path, 'r', encoding='utf-8')
    data = files.read()
    print(data)
    files.close()

def menu():
    print("Task 1")
    
    print("Task 2")
    print("Task 3")
    print("Task 4")
    choise = input("Enter task number: ")
    if choise == "1":
        task1()
    elif choise == "2":
        task2()
    elif choise == "3":
        task3()
    elif choise == "4":
        task4()
menu()