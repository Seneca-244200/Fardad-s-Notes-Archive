# OOP244 Practice labs
---

# How to Work on and Submit Your OOP244 Work

Before starting submitable work in OOP244, you should already have:

* created your private GitHub repository for OOP244
* added your professor as a collaborator
* cloned the repository on your own computer
* cloned the same repository on Matrix

All submitable OOP244 work, including labs, assignments, workshops, and other required exercises, should be completed using the process below.

---

# Work and Submission Process

## 1. Create a Proper Folder in Your Repository

On your own computer, open your OOP244 repository.

Create a new folder for the work you are doing.

Use an organized folder structure. For example:

```text
labs/lab1
labs/lab2
assignments/assignment1
workshops/workshop1
```

or another clear structure approved by your professor.

Each submitable task should have its own folder.

Do not mix files from different submissions in the same folder.

---

## 2. Do Your Work Inside the Repository

Create all required files inside the correct folder in your repository.

Do not create your files somewhere else and copy them into the repository only at the end.

Work directly inside your repository folder from the beginning.

This makes it easier to:

* track your progress
* commit your changes regularly
* push your work to GitHub
* pull the same work on Matrix
* submit the correct files

---

## 3. Commit Your Work Regularly

As you complete parts of the work, commit your changes.

Do not wait until the very end to make one large commit.

For example, you may commit after:

* creating the required files
* completing one module
* completing one part of the question
* fixing compile errors
* testing successfully
* making final corrections

Example using Git commands:

```bash
git add .
git commit -m "Create initial files"
```

On Windows, you may use **TortoiseGit** to do the equivalent process:

* right-click inside your repository folder
* choose the Git commit option
* select the files to commit
* write a clear commit message
* complete the commit

Later, you may commit again:

```bash
git add .
git commit -m "Complete main implementation"
```

Or, on Windows, use **TortoiseGit** to commit the equivalent changes with a meaningful message.

Good commit messages briefly explain what was completed.

Examples:

```text
Create header file
Implement input function
Fix output formatting
Complete preliminary testing
```

---

## 4. Test Your Work on Your Computer

Before submitting, compile and run your program on your own computer.

Make sure:

* the program compiles
* the program runs correctly
* the output matches the expected output, if one is provided
* all required files are present
* file names are correct
* your code follows the required namespace rules
* you did not change any tester file unless instructed
* your work follows all instructions for that specific submission

Fix any problems before continuing.

---

## 5. Commit and Push Your Latest Version to GitHub

When you believe the work is complete and working, commit your final changes.

Example using Git commands:

```bash
git add .
git commit -m "Complete submission"
```

On Windows, you may use **TortoiseGit** to commit the equivalent changes.

Then push your work to GitHub:

```bash
git push
```

Or, on Windows, use **TortoiseGit** and choose the equivalent **Push** option.

After pushing, your latest work should be visible in your GitHub repository.

---

## 6. Log in to Matrix

Log in to Matrix using your Seneca account.

Go to the folder where you cloned your OOP244 repository on Matrix.

Make sure you are inside the correct repository, not a random folder.

---

## 7. Pull the Latest Changes on Matrix

On Matrix, update your local copy of the repository by pulling the latest changes from GitHub:

```bash
git pull
```

If you are using a Git tool instead of command-line Git, use the equivalent **Pull** operation.

This step brings your latest work from GitHub into your Matrix copy of the repository.

---

## 8. Go to the Correct Submission Folder

Move into the folder for the work you want to submit.

For example:

```bash
cd labs/lab1
```

or:

```bash
cd assignments/assignment1
```

The exact folder name depends on how your repository is organized and where you placed the files.

Make sure the required files are in the current folder before running the submitter.

You can check the files using:

```bash
ls
```

---

## 9. Submit Your Work from Matrix

Run the submitter command provided for that specific work.

The command will usually look similar to this:

```bash
~fardad.soleimanloo/submit 244/delivarable/section_name
```

For example, a lab submission may look like:

```bash
~fardad.soleimanloo/submit 244/lab01/nxx
```

Replace the section code, such as `nxx`, with the correct section code given by your professor.

Use the exact submitter command provided for the specific lab, assignment, workshop, or exercise.

---

## 10. If the Submission Is Successful

If the submitter accepts your work, your submission is complete.

Make sure the same final version is also committed and pushed to GitHub.

If you made no changes on Matrix after pulling from GitHub, there is nothing else to do.

---

## 11. If the Submission Is Not Successful

Read the submitter message carefully.

It may tell you about:

* missing files
* wrong file names
* compile errors
* incorrect output
* incorrect folder location
* other submission problems

You must fix the problem and submit again.

---

# Fixing Submission Problems

## Option A — Fix the Problem on Matrix

If the problem is small, you may fix it directly on Matrix.

After fixing it, run the submitter again.

When the submitter accepts your work, commit and push the corrected version from Matrix:

```bash
git add .
git commit -m "Fix submission issue"
git push
```

If you are using a Git tool instead of command-line Git, use the equivalent **Add**, **Commit**, and **Push** operations.

This is important because your GitHub repository must contain the same corrected version that was successfully submitted.

---

## Option B — Fix the Problem on Your Own Computer

If you prefer to work on your own computer:

* go back to your repository on your computer
* fix the problem
* test again
* commit the changes
* push to GitHub
* log in to Matrix
* run `git pull`
* go to the correct submission folder
* run the submitter again

Example command-line workflow on your computer:

```bash
git add .
git commit -m "Fix submission problem"
git push
```

On Windows, you may use **TortoiseGit** to do the equivalent **Add**, **Commit**, and **Push** process.

Then on Matrix:

```bash
git pull
```

Repeat the process until the submission is successful.

---

# Important Reminders

* Always work inside your Git repository.
* Keep your repository organized.
* Each submitable task should have its own folder.
* Commit your work regularly.
* Push your completed work to GitHub before submitting from Matrix.
* Pull the latest changes on Matrix before running the submitter.
* Run the submitter from the correct folder.
* Do not leave your final corrected version only on Matrix.
* Do not leave your final corrected version only on your own computer.
* Your GitHub repository should contain the same final version that was successfully submitted.
* Use the exact submitter command given for each specific submission.

---

# General Workflow Summary

```text
Create a folder for the work in your repository
        ↓
Do the work inside that folder
        ↓
Commit regularly
        ↓
Test on your own computer
        ↓
Commit and push to GitHub
        ↓
Log in to Matrix
        ↓
Pull latest changes from GitHub
        ↓
Go to the correct submission folder
        ↓
Run the submitter command
        ↓
If accepted, make sure GitHub has the final version
        ↓
If not accepted, fix the problem, commit, push, pull, and submit again
```

---

# Simple Rule to Remember

Your work should always move in this direction:
> An arrow to towards GitHub is `commit and push` , an arrow coming out of GitHub is `pull`
```text
Your Computer → GitHub → Matrix, then use Submitter to submit
```

If you fix something on Matrix, then push it back:

```text
Matrix → GitHub → Your Computer
```

This keeps your computer, GitHub, Matrix, and the submitted version consistent and in sync.
