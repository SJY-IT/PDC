# Your task here is to implement some basic MPI programs in C, and discuss aspects of their behaviour.
# In this first part, we are asking you to work with Program 3.1 in Section 3.1 on page 85 of the textbook.

# Steps

1. Compile and run the program to replicate the output given in the textbook. First with one process, then with four.
2. Write a brief and precise explanation of how the program works.
3. Draw a diagram showing all of the messages sent when executed with four tasks. Number the messages in the order in which they occur.
4. Question: Will the messages be ordered in the same way for all executions of the program? Explain.
5. Create a second version of the program with only one change.
This change is to use the special constant MPI_ANY_SOURCE in the call to Receive.
6. Explain what effect, if any, you expect this change to have.
7. Then try to observe whether or not this happens. Explain your method and present results.

Note In the lecture for Week 3, I showed how to compile and run this program using Open MPI on the School computer uss.cs.adelaide.edu.au (note that this is a Computer Science computer, hence the cs in the name). This is the preferred option, because everything works smoothly. As I mentioned there, in the near future it will be possible to use a specialised cluster. SVN is available on uss, and is the preferred method for managing your project files. it will of course also be available on the cluster when it is commissioned.

What you need to hand in
As mentioned in Assignment 1 Introduction, the primary mode of assessment is a report. Submit this in PDF format, with the name ilestone_report.pdf.

In this report, include your output from Step 1, and answers as required for the other steps.

Also hand in the two programs that you used. Use the names hello.c and hello1.c.

In addition, submit the log of commit messages to SVN that you used in developing this part of the assignment. Use the name SVN_log.txt for this file.

We won't formally mark your Milestone - we will just check to see that you have produced the work required for this part. You will get 1.5 of the 10 marks for that. This intermediate deadline is important because it makes sure that you are familiar with the infrastructure needed to do your assignments. Try to finish the Milestone before its deadline: The Final part is more complicated.
