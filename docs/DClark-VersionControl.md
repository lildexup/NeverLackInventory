## COS119 — Project and Portfolio I: Computer Science

- **Dexter Clark**
- **November 30, 2026**

This document covers basic PowerShell and Git commands for developing NeverLack Inventory Manager on Windows.

## Topic: Terminal

### 1. Essential commands in PowerShell

| Action | Command |
| --- | --- |
| Clear the screen | `Clear-Host` |
| Print the working directory | `Get-Location` |
| List files and folders | `Get-ChildItem` |
| Include hidden files and folders | `Get-ChildItem -Force` |
| List all entries in a readable table | `Get-ChildItem -Force \| Format-Table Mode, LastWriteTime, Length, Name -AutoSize` |
| Change to a specific directory | `Set-Location -LiteralPath 'C:\Path\To\Folder'` |
| Go to the root of the current drive | `Set-Location \` |
| Go to the user's home directory | `Set-Location ~` |
| Go up one folder | `Set-Location ..` |
| Go up two folders | `Set-Location ..\..` |
| Go to the Desktop folder | `Set-Location -LiteralPath ([Environment]::GetFolderPath('DesktopDirectory'))` |

### 2. Folder drop

Dropping a folder into a terminal that supports it inserts the folder's path at the cursor. The equivalent command tested in PowerShell was `cd "C:\Program Files"`. After running it, `Get-Location` returned `C:\Program Files`. The quotes keep the space in the folder name within a single path argument.

## Topic: Version Control & Git

### 1. Three types of version control

- **Local version control** stores revision history on one computer. It can track changes to files without a server.
- **Centralized version control** stores the shared history on a central server. Contributors obtain files from the server and send their changes back to it.
- **Distributed version control** gives contributors a local repository with history. Git lets developers create commits offline and exchange them with a remote later.

### 2. Essential Git commands

| Action | Command |
| --- | --- |
| Clone a repository | `git clone https://github.com/lildexup/NeverLackInventory.git` |
| Set a global user name | `git config --global user.name "Dexter Clark"` |
| Set a global email address | `git config --global user.email "YOUR_GITHUB_EMAIL"` |
| Check the working tree and staging area | `git status` |
| Stage the changes to a file | `git add README.md` |
| Make a commit with a message | `git commit -m "Document the inventory menu"` |
| Show commit history | `git log` |
| Show Git's help screen | `git --help` |

### 3. Connect to GitHub over HTTPS

1. In GitHub, open the repository and choose **Code → HTTPS**. Copy the URL.
2. Run `git clone` with that URL and open the cloned folder. For an existing checkout, run `git remote -v` to verify the remote URL.
3. Use Git Credential Manager's browser sign-in prompt when GitHub requires authentication.
4. Switch to the project branch with `git switch dev`. After staging and committing the intended changes, run `git push origin dev` to publish the commits. Review the changes in a pull request into `main`.

### 4. Using .gitignore

- **Purpose.** A `.gitignore` lists patterns for untracked files Git should ignore. It keeps generated files and local settings out of routine commits. A file already tracked by Git stays tracked until it is explicitly removed from the index.
- **.DS_Store.** macOS Finder creates this file to remember folder appearance and layout settings. It is specific to a machine's file browser and has no role in compiling the C++ app.
- **Visual Studio example.** Ignore `.vs/` because it holds local settings and caches that Visual Studio can recreate. Keep source files, the solution, and the project file in Git so someone else can open and build the project.

# Reference Links

The PowerShell command reference was especially helpful for checking how to display hidden files and change to a path containing spaces. Pro Git explains how local, centralized, and distributed systems store history.

- **Terminal commands** · [Microsoft PowerShell Management commands](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.management/)
- **Three types of version control** · [Pro Git — About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control)
- **Git commands** · [Git Reference](https://git-scm.com/docs)
- **Connecting to GitHub using Terminal** · [GitHub — Cloning a repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) and [GitHub — Caching your GitHub credentials in Git](https://docs.github.com/en/get-started/git-basics/caching-your-github-credentials-in-git)
- **Using .gitignore** · [Git — gitignore documentation](https://git-scm.com/docs/gitignore)
