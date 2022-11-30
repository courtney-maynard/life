Last login: Wed Nov 30 13:53:36 on ttys000
(base) courtneymaynard@Courtneys-MacBook-Pro-2 ~ % ssh cbmaynard24@th121-13.cs.wm.edu
cbmaynard24@th121-13.cs.wm.edu's password: 
Welcome to Ubuntu 20.04.5 LTS (GNU/Linux 5.4.0-132-generic x86_64)

  System information as of Wed 30 Nov 2022 01:54:33 PM EST

  System load:  1.97                Temperature:           57.0 C
  Usage of /:   34.8% of 232.64GB   Processes:             332
  Memory usage: 2%                  Users logged in:       1
  Swap usage:   0%                  IPv4 address for eno1: 128.239.26.70

 * Strictly confined Kubernetes makes edge and IoT secure. Learn how MicroK8s
   just raised the bar for easy, resilient and secure K8s cluster deployment.

   https://ubuntu.com/engage/secure-kubernetes-at-the-edge
New release '22.04.1 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


FQDN:  th121-13.cs.wm.edu (128.239.26.70)

Please email cs-support@wm.edu to open a support ticket
 or visit http://support.cs.wm.edu - Thank you
Last login: Wed Nov 30 13:54:03 2022 from 100.65.55.53
cbmaynard24@th121-13:~$ cd life
-bash: cd: life: No such file or directory
cbmaynard24@th121-13:~$ cd lbp
cbmaynard24@th121-13:~/lbp$ cd life
cbmaynard24@th121-13:~/lbp/life$ cd ASSIGNMENT_11
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
perceptron.c: In function ‘new_Data’:
perceptron.c:63:14: warning: implicit declaration of function ‘isspace’ [-Wimplicit-function-declaration]
   63 |          if (isspace(charcount))
      |              ^~~~~~~
perceptron.c:66:21: error: break statement not within loop or switch
   66 |                     break;
      |                     ^~~~~
perceptron.c:81:34: warning: format ‘%lf’ expects argument of type ‘double *’, but argument 5 has type ‘int *’ [-Wformat=]
   81 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]), &(data->targets[i])) != EOF)
      |                                ~~^                                                     ~~~~~~~~~~~~~~~~~~~
      |                                  |                                                     |
      |                                  double *                                              int *
      |                                %d
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
perceptron.c: In function ‘new_Data’:
perceptron.c:63:14: warning: implicit declaration of function ‘isspace’ [-Wimplicit-function-declaration]
   63 |          if (isspace(charcount))
      |              ^~~~~~~
perceptron.c:66:21: error: break statement not within loop or switch
   66 |                     break;
      |                     ^~~~~
perceptron.c:82:101: warning: comparison between pointer and integer
   82 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget) != EOF)
      |                                                                                                     ^~
perceptron.c:82:34: warning: format ‘%lf’ expects argument of type ‘double *’, but argument 5 has type ‘int’ [-Wformat=]
   82 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget) != EOF)
      |                                ~~^
      |                                  |
      |                                  double *
perceptron.c:82:108: error: expected ‘)’ before ‘data’
   82 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget) != EOF)
      |           ~                                                                                                ^
      |                                                                                                            )
   83 |  data->targets[i] = (int) data->targets[i];
      |  ~~~~                                                                                                       
perceptron.c:88:1: error: expected expression before ‘}’ token
   88 | }
      | ^
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
perceptron.c: In function ‘new_Data’:
perceptron.c:63:14: warning: implicit declaration of function ‘isspace’ [-Wimplicit-function-declaration]
   63 |          if (isspace(charcount))
      |              ^~~~~~~
perceptron.c:66:21: error: break statement not within loop or switch
   66 |                     break;
      |                     ^~~~~
perceptron.c:82:101: warning: comparison between pointer and integer
   82 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget) != EOF))
      |                                                                                                     ^~
perceptron.c:82:34: warning: format ‘%lf’ expects argument of type ‘double *’, but argument 5 has type ‘int’ [-Wformat=]
   82 |     while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget) != EOF))
      |                                ~~^
      |                                  |
      |                                  double *
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
perceptron.c: In function ‘new_Data’:
perceptron.c:63:14: warning: implicit declaration of function ‘isspace’ [-Wimplicit-function-declaration]
   63 |          if (isspace(charcount))
      |              ^~~~~~~
perceptron.c:66:21: error: break statement not within loop or switch
   66 |                     break;
      |                     ^~~~~
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
perceptron.c: In function ‘new_Data’:
perceptron.c:66:7: error: break statement not within loop or switch
   66 |       break;
      |       ^~~~~
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c -c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h  perceptron.o
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ touch train.dt
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ touch train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ rm train.dt
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h  perceptron.o  train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
main.c: In function ‘main’:
main.c:12:29: error: expected expression before ‘const’
   12 |     Model model = new_Model(const Data data);
      |                             ^~~~~
main.c:13:5: warning: implicit declaration of function ‘initialize_model’ [-Wimplicit-function-declaration]
   13 |     initialize_model(model);
      |     ^~~~~~~~~~~~~~~~
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h  perceptron.o  train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
main.c: In function ‘main’:
main.c:12:29: error: expected expression before ‘const’
   12 |     Model model = new_Model(const Data data);
      |                             ^~~~~
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.h
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
a.out  main.c  perceptron.c  perceptron.h  perceptron.o  train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ main.c train.dt
main.c: command not found
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ./a.out train.dat
loaded 20 examples
Segmentation fault (core dumped)
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gdb ./a.out train.dat
GNU gdb (Ubuntu 9.2-0ubuntu1~20.04.1) 9.2
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...
(No debugging symbols found in ./a.out)
"/home/cbmaynard24/lbp/life/ASSIGNMENT_11/train.dat" is not a core dump: file format not recognized
(gdb) start
Temporary breakpoint 1 at 0x18d7
Starting program: /home/cbmaynard24/lbp/life/ASSIGNMENT_11/a.out 

Temporary breakpoint 1, 0x00005555555558d7 in main ()
(gdb) n
Single stepping until exit from function main,
which has no line number information.
load_data: can't open (null)
[Inferior 1 (process 132633) exited with code 01]
(gdb) n
The program is not being run.
(gdb) xit
Undefined command: "xit".  Try "help".
(gdb) exit
Undefined command: "exit".  Try "help".
(gdb) quit
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
a.out  main.c  perceptron.c  perceptron.h  perceptron.o  train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ./a.out train.dat
Segmentation fault (core dumped)
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ./a.out train.dat
loaded 20 examples
Segmentation fault (core dumped)
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c -c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ls
main.c	perceptron.c  perceptron.h  perceptron.o  train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ./a.out train.dat
loaded 20 examples
Segmentation fault (core dumped)
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c -c
perceptron.c: In function ‘new_Model’:
perceptron.c:111:34: error: expected ‘;’ before ‘)’ token
  111 |     for (int i = 0; i < dimension); i++){
      |                                  ^
      |                                  ;
perceptron.c:111:37: error: ‘i’ undeclared (first use in this function)
  111 |     for (int i = 0; i < dimension); i++){
      |                                     ^
perceptron.c:111:37: note: each undeclared identifier is reported only once for each function it appears in
perceptron.c:111:40: error: expected ‘;’ before ‘)’ token
  111 |     for (int i = 0; i < dimension); i++){
      |                                        ^
      |                                        ;
perceptron.c:111:40: error: expected statement before ‘)’ token
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.c -c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ gcc perceptron.o main.c
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ ./a.out train.dat
loaded 20 examples
Segmentation fault (core dumped)
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ git add .
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ git commit -m "evolved perceptron.c"
[main e4f3b88] evolved perceptron.c
 4 files changed, 232 insertions(+)
 create mode 100644 ASSIGNMENT_11/main.c
 create mode 100644 ASSIGNMENT_11/perceptron.c
 create mode 100644 ASSIGNMENT_11/perceptron.h
 create mode 100644 ASSIGNMENT_11/train.dat
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ git push
To github.com:courtney-maynard/cpython.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'git@github.com:courtney-maynard/cpython.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ git add --help
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ 
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ git status
On branch main
Your branch is based on 'upstream/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
  (commit or discard the untracked or modified content in submodules)
	modified:   ../cpython (modified content)

no changes added to commit (use "git add" and/or "git commit -a")
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ cd ..
cbmaynard24@th121-13:~/lbp/life$ git add
Nothing specified, nothing added.
Maybe you wanted to say 'git add .'?
cbmaynard24@th121-13:~/lbp/life$ git add .
cbmaynard24@th121-13:~/lbp/life$ git commit -m "add Assignment 11"
On branch main
Your branch is based on 'upstream/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
  (commit or discard the untracked or modified content in submodules)
	modified:   cpython (modified content)

no changes added to commit (use "git add" and/or "git commit -a")
cbmaynard24@th121-13:~/lbp/life$ ls
01_FUNCTIONS  03_MODULES	 05_ABSTRACT_TYPES  99_MISCELLANEOUS  ASSIGNMENT_08  ASSIGNMENT_11  README.md
02_FRAMES     04_CONCRETE_TYPES  06_CYPYTHON	    ASSIGNMENT_06     ASSIGNMENT_10  cpython	    sumr
cbmaynard24@th121-13:~/lbp/life$ cd ASSIGNMENT_11
cbmaynard24@th121-13:~/lbp/life/ASSIGNMENT_11$ vi perceptron.c

    fprintf(stdout, "loaded %d examples\n", i);
} 


Model new_Model(const Data data)
{

    Model model = (Model) malloc(sizeof(Model));
    model->shapeStructure.num_examples = data->shapeStructure.num_examples;
    model->weights = (double*) malloc(model->shapeStructure.dimensionality * sizeof(double));


    model->shapeStructure.dimensionality = (model->shapeStructure.num_features + 1);

    int dimension = model->shapeStructure.dimensionality;

    for (int i = 0; i < dimension; i++){
            model->weights[i] = (double) rand() / RAND_MAX;
    }

    fprintf(stdout, "testing that the model was built");
    return model;
}

static void sgd(Model model, Data data)
{

    model->weights[2] += data->Coordinates.target * data->Coordinates.xcoord;
    model->weights[1] += data->Coordinates.target * data->Coordinates.ycoord;
    //weights[0] = weights[0];
    model->weights[0] += data->Coordinates.target * 1;
}

static int predict(Model model, Data data)
"perceptron.c" 167L, 4113C                                                                                                                       111,33        70%
